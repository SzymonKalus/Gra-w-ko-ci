#include "kombinacje.h"

class kombinacje : public szkola {
private:
	int para_k() {
		int wynik = 0;
		for (int i = 0; i < 4; i++)
		{
			if (kosci[i] == kosci[i + 1])
				wynik = kosci[i] * 2;
		}
		return wynik;
	};
	int dwie_pary_k() {
		if (kosci[1] == kosci[3])
			return 0;
		else
		{
			int wynik = kosci[1] * 2 + kosci[3] * 2;
			if (kosci[0] == kosci[1])
			{
				if (kosci[2] == kosci[3] || kosci[3] == kosci[4])
					return wynik;
				else
					return 0;
			}
			else if (kosci[1] == kosci[2] && kosci[3] == kosci[4])
				return wynik;
			else
				return 0;
		}
	};
	int trzy_takie_same_k() {
		int wynik = 0;
		for (int i = 0; i < 3; i++)
		{
			if (kosci[i] == kosci[i + 1] && kosci[i] == kosci[i + 2])
				wynik = kosci[i] * 3;
		}
		return wynik;
	};
	int maly_k() {
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] != i + 1)
				return 0;
		}
		return 15;
	};
	int duzy_k() {
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] != i + 2)
				return 0;
		}
		return 20;
	};
	int parzyste_k() {
		int wynik = 0;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] % 2 != 0)
				return 0;
			else
				wynik += kosci[i];
		}
		return wynik;
	};
	int nieparzyste_k() {
		int wynik = 0;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] % 2 == 0)
				return 0;
			else
				wynik += kosci[i];
		}
		return wynik;
	};
	int full_k() {
		if (kosci[0] == kosci[2] && kosci[3] == kosci[4])
			return kosci[0] * 3 + kosci[3] * 2;
		else if (kosci[0] == kosci[1] && kosci[2] == kosci[4])
			return kosci[0] * 2 + kosci[3] * 3;
		else
			return 0;
	};
	int kareta_k() {
		if (kosci[0] == kosci[3] || kosci[1] == kosci[4])
			return kosci[1] * 4;
		else
			return 0;
	};
	int poker_k() {
		if (kosci[0] == kosci[4])
			return kosci[1] * 5 + 100;
		else
			return 0;
	};
	int szansa_k() {
		int wynik = kosci[0] + kosci[1] + kosci[2] + kosci[3] + kosci[4];
		return wynik;
	};
public:
	void Zwroc(string dane, const int nr, shared_ptr<Tabela>& Wyniki) {
		sort(kosci.begin(), kosci.end());
		int zdobyte_punkty = 0;
		bool sprawdzenie_poprawnosci_danych = false;

		while (!sprawdzenie_poprawnosci_danych)
		{
			if (dane == "jedynki") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = jedynki_k();
				koncowy_wynik(zdobyte_punkty, nr, Wyniki);
				Wyniki->Kolumna[nr].jedynki = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].jedynki.size() != 3)
					Wyniki->Kolumna[nr].jedynki.resize(3, ' ');
			}
			else if (dane == "dwojki") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = dwojki_k();
				koncowy_wynik(zdobyte_punkty, nr, Wyniki);
				Wyniki->Kolumna[nr].dwojki = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].dwojki.size() != 3)
					Wyniki->Kolumna[nr].dwojki.resize(3, ' ');
			}
			else if (dane == "trojki") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = trojki_k();
				koncowy_wynik(zdobyte_punkty, nr, Wyniki);
				Wyniki->Kolumna[nr].trojki = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].trojki.size() != 3)
					Wyniki->Kolumna[nr].trojki.resize(3, ' ');
			}
			else if (dane == "czworki") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = czworki_k();
				koncowy_wynik(zdobyte_punkty, nr, Wyniki);
				Wyniki->Kolumna[nr].czworki = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].czworki.size() != 3)
					Wyniki->Kolumna[nr].czworki.resize(3, ' ');
			}
			else if (dane == "piatki") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = piatki_k();
				koncowy_wynik(zdobyte_punkty, nr, Wyniki);
				Wyniki->Kolumna[nr].piatki = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].piatki.size() != 3)
					Wyniki->Kolumna[nr].piatki.resize(3, ' ');
			}
			else if (dane == "szostki") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = szostki_k();
				koncowy_wynik(zdobyte_punkty, nr, Wyniki);
				Wyniki->Kolumna[nr].szostki = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].szostki.size() != 3)
					Wyniki->Kolumna[nr].szostki.resize(3, ' ');
			}
			else if (dane == "para") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = para_k() * reka;
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].para = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].para.size() != 2)
					Wyniki->Kolumna[nr].para.resize(2, ' ');
			}
			else if (dane == "dwie_pary") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = dwie_pary_k() * reka;
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].dwie_pary = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].dwie_pary.size() != 2)
					Wyniki->Kolumna[nr].dwie_pary.resize(2, ' ');
			}
			else if (dane == "trzy_takie_same") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = trzy_takie_same_k() * reka;
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].trzy_takie_same = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].trzy_takie_same.size() != 2)
					Wyniki->Kolumna[nr].trzy_takie_same.resize(2, ' ');
			}
			else if (dane == "maly") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = maly_k() * reka;
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].maly = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].maly.size() != 2)
					Wyniki->Kolumna[nr].maly.resize(2, ' ');
			}
			else if (dane == "duzy") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = duzy_k() * reka;
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].duzy = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].duzy.size() != 2)
					Wyniki->Kolumna[nr].duzy.resize(2, ' ');
			}
			else if (dane == "parzyste") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = parzyste_k() * reka;
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].parzyste = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].parzyste.size() != 2)
					Wyniki->Kolumna[nr].parzyste.resize(2, ' ');
			}
			else if (dane == "nieparzyste") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = nieparzyste_k() * reka;
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].nieparzyste = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].nieparzyste.size() != 2)
					Wyniki->Kolumna[nr].nieparzyste.resize(2, ' ');
			}
			else if (dane == "full") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = full_k() * reka;
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].full = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].full.size() != 2)
					Wyniki->Kolumna[nr].full.resize(2, ' ');
			}
			else if (dane == "kareta") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = kareta_k() * reka;
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].kareta = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].kareta.size() != 2)
					Wyniki->Kolumna[nr].kareta.resize(2, ' ');
			}
			else if (dane == "poker") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = poker_k() * reka;
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].poker = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].poker.size() != 3)
					Wyniki->Kolumna[nr].poker.resize(3, ' ');
			}
			else if (dane == "szansa") {
				sprawdzenie_poprawnosci_danych = true;
				zdobyte_punkty = szansa_k();
				Wyniki->Kolumna[nr].wynik += zdobyte_punkty;
				Wyniki->Kolumna[nr].szansa = to_string(zdobyte_punkty);
				if (Wyniki->Kolumna[nr].szansa.size() != 2)
					Wyniki->Kolumna[nr].szansa.resize(2, ' ');
			}
			else
			{
				cout << "Niepoprawna nazwa kombinacji, wpisz jeszcze raz! Poprawne nazwy:" << endl;
				cout << "jedynki, dwojki, trojki, czworki, piatki, szostki, para, dwie_pary, trzy_takie_same, maly, duzy, parzyste, nieparzyste, full, kareta, poker, szansa" << endl;
				cin >> dane;
			}
		}
	};
};