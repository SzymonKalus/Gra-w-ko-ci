#include "rundy.h"

class runda_1 : public kombinacje {
private:
	const int nr_rundy = 0;
public:
	bool Mozliwosci(shared_ptr<Tabela>& Wyniki) {
		string dane;
		cout << "Wybierz numer kosci do przerzucenia lub kombinacje, np.: 1,2,5 | para" << endl;
		cin >> dane;
		int identyfikator = (int)dane[0] - '0';
		if (identyfikator < 6)
		{
			Przerzuc(dane);
			return false;
		}
		else
		{
			Zwroc(dane, nr_rundy, Wyniki);
			return true;
		}
	};
	void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki) {
		for (int i = 0; i < 17; i++)
		{
			reka = 2;
			Rzuc();
			Pokaz();
			if (!Mozliwosci(Wyniki)) {
				cout << endl;
				reka = 1;
				if (!Mozliwosci(Wyniki)) {
					cout << endl;
					string kombinacja;
					cout << "Wybierz kombinacje, np.: para" << endl;
					cin >> kombinacja;
					Zwroc(kombinacja, nr_rundy, Wyniki);
				}
			}
			Pokaz_tabele(Wyniki);
		}
	};
};

class runda_2 : public kombinacje {
private:
	const int nr_rundy = 1;
public:
	bool Mozliwosci(string kombinacja, shared_ptr<Tabela>& Wyniki) {
		string dane;
		cout << "Wybierz numer kosci do przerzucenia lub zakoncz ture(wpisz z), np.: 1,2,5 | z" << endl;
		cin >> dane;
		int identyfikator = (int)dane[0] - '0';
		if (identyfikator < 6)
		{
			Przerzuc(dane);
			return false;
		}
		else
		{
			Zwroc(kombinacja, nr_rundy, Wyniki);
			return true;
		}
	};
	void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki) {
		for (int i = 0; i < 17; i++)
		{
			reka = 2;
			Rzuc();
			Pokaz();
			string kombinacja;
			cout << "Wybierz kombinacje, ktora chcesz rzucac, np.: para" << endl;
			cin >> kombinacja;
			if (!Mozliwosci(kombinacja, Wyniki)) {
				cout << endl;
				reka = 1;
				if (!Mozliwosci(kombinacja, Wyniki)) {
					if (Wyniki->Kolumna[nr_rundy].szansa == "  ")
					{
						cout << endl;
						string wybor;
						cout << "zakoncz ture(z) lub skorzystaj z szansy(s)" << endl;
						cin >> wybor;
						if (wybor == "s")
							Zwroc("szansa", nr_rundy, Wyniki);
						else
							Zwroc(kombinacja, nr_rundy, Wyniki);
					}
					else
					{
						Sleep(2000);
						Zwroc(kombinacja, nr_rundy, Wyniki);
					}
				}
			}
			Pokaz_tabele(Wyniki);
		}
	};
};

class runda_3 : public kombinacje {
private:
	const int nr_rundy = 2;
public:
	bool Mozliwosci(string kombinacja, shared_ptr<Tabela>& Wyniki) {
		string dane;
		cout << "Wybierz numer kosci do przerzucenia lub zakoncz ture(wpisz z), np.: 1,2,5 | z" << endl;
		cin >> dane;
		int identyfikator = (int)dane[0] - '0';
		if (identyfikator < 6)
		{
			Przerzuc(dane);
			return false;
		}
		else
		{
			Zwroc(kombinacja, nr_rundy, Wyniki);
			return true;
		}
	};
	void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki) {
		for (int i = 0; i < 17; i++)
		{
			reka = 2;
			Rzuc();
			Pokaz();
			if (!Mozliwosci(kolejnosc[i], Wyniki)) {
				cout << endl;
				reka = 1;
				if (!Mozliwosci(kolejnosc[i], Wyniki)) {
					cout << endl;
					Sleep(2000);
					Zwroc(kolejnosc[i], nr_rundy, Wyniki);
				}
			}
			Pokaz_tabele(Wyniki);
		}
	};
};