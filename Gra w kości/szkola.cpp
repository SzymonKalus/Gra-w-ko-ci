#include "szkola.h"

class szkola : public gra {
public:
	int jedynki_k() {
		int baza = -3;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] == 1)
				baza += 1;
		}
		return baza;
	};
	int dwojki_k() {
		int baza = -6;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] == 2)
				baza += 2;
		}
		return baza;
	};
	int trojki_k() {
		int baza = -9;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] == 3)
				baza += 3;
		}
		return baza;
	};
	int czworki_k() {
		int baza = -12;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] == 4)
				baza += 4;
		}
		return baza;
	};
	int piatki_k() {
		int baza = -15;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] == 5)
				baza += 5;
		}
		return baza;
	};
	int szostki_k() {
		int baza = -18;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] == 6)
				baza += 6;
		}
		return baza;
	};
	void koncowy_wynik(int uzyskana_wartosc, const int nr, shared_ptr<Tabela>& Wyniki) {

		int pomocnicza = Wyniki->Kolumna[nr].szkola;
		if (pomocnicza > -1)
		{
			pomocnicza += uzyskana_wartosc;
			if (pomocnicza < 0)
			{
				pomocnicza -= 50;
				Wyniki->Kolumna[nr].wynik += pomocnicza;
			}

		}
		else
		{
			Wyniki->Kolumna[nr].wynik += uzyskana_wartosc;
			pomocnicza += uzyskana_wartosc;
			if (pomocnicza > -51)
			{
				Wyniki->Kolumna[nr].wynik -= pomocnicza;
				pomocnicza += 50;
			}
		}

		Wyniki->Kolumna[nr].szkola = pomocnicza;
	};
};
