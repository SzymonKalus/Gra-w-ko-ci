#include "Zapisz_do_pliku.h"

class Zapisz_do_pliku {
public:
	void Zapisz_wynik(shared_ptr<Tabela>& Wyniki) {
		fstream plik;
		plik.open("Tabela_wynikow.txt", ios::app);
		if (plik.good())
		{
			int wynik = Wyniki->Kolumna[0].wynik + Wyniki->Kolumna[1].wynik + Wyniki->Kolumna[2].wynik;
			string nick;
			cout << "Twoj koncowy wynik to: " << wynik << endl;
			cout << endl;
			cout << "Podaj swoj nick: ";
			cin >> nick;
			plik << nick << " - " << wynik << " punkty\n";
			plik.close();
		}
	};
	void Sprawdz_wyniki() {
		fstream plik;
		plik.open("Tabela_wynikow.txt");
		if (plik.good())
		{
			string napis;
			while (!plik.eof())
			{
				getline(plik, napis);
				cout << napis << endl;
			}
			plik.close();
		}
	};
};
