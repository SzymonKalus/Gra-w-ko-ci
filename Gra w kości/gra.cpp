#include "gra.h"

class gra {
public:
	vector<int> kosci;
	int reka = 1;
	const string kolejnosc[17] = { "jedynki", "dwojki", "trojki", "czworki", "piatki", "szostki", "para", "dwie_pary", "trzy_takie_same", "maly", "duzy", "parzyste", "nieparzyste", "full", "kareta", "poker", "szansa" };

	virtual void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki) {};
	void Rzuc() {
		for (int i = 0; i < 5; i++)
			kosci.push_back(rand() % 6 + 1);

		cout << endl;
	};
	void Przerzuc(string dane) {
		for (char& i : dane)
		{
			if ((int)i < '1' || (int)i >'5')
				continue;
			else {
				kosci[(int)i - '0' - 1] = rand() % 6 + 1;
			}
		}
		Pokaz();
	};
	void Pokaz() {
		auto handle = GetStdHandle(STD_OUTPUT_HANDLE);
		wchar_t zero[] = L"\x2502       \x2502 ";
		wchar_t jedna[] = L"\x2502   \x25A0   \x2502 ";
		wchar_t jedna_prawy[] = L"\x2502     \x25A0 \x2502 ";
		wchar_t jedna_lewy[] = L"\x2502 \x25A0     \x2502 ";
		wchar_t dwie[] = L"\x2502 \x25A0   \x25A0 \x2502 ";
		wchar_t gora[] = L"\x250C\x2500\x2500\x2500\x2500\x2500\x2500\x2500\x2510 ";
		wchar_t dol[] = L"\x2514\x2500\x2500\x2500\x2500\x2500\x2500\x2500\x2518 ";
		wchar_t podpis[] = L"  Koœæ 1    Koœæ 2    Koœæ 3    Koœæ 4    Koœæ 5 \n";
		size_t dlugosc = wcslen(zero);

		for (int i = 0; i < 5; i++)
		{
			WriteConsoleW(handle, gora, dlugosc, NULL, NULL);
		}
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] == 1)
				WriteConsoleW(handle, zero, dlugosc, NULL, NULL);
			else if (kosci[i] == 2 || kosci[i] == 3)
				WriteConsoleW(handle, jedna_lewy, dlugosc, NULL, NULL);
			else
				WriteConsoleW(handle, dwie, dlugosc, NULL, NULL);
		}
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] == 4 || kosci[i] == 2)
				WriteConsoleW(handle, zero, dlugosc, NULL, NULL);
			else if (kosci[i] == 6)
				WriteConsoleW(handle, dwie, dlugosc, NULL, NULL);
			else
				WriteConsoleW(handle, jedna, dlugosc, NULL, NULL);
		}
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			if (kosci[i] == 1)
				WriteConsoleW(handle, zero, dlugosc, NULL, NULL);
			else if (kosci[i] == 2 || kosci[i] == 3)
				WriteConsoleW(handle, jedna_prawy, dlugosc, NULL, NULL);
			else
				WriteConsoleW(handle, dwie, dlugosc, NULL, NULL);
		}
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			WriteConsoleW(handle, dol, dlugosc, NULL, NULL);
		}
		cout << endl;
		WriteConsoleW(handle, podpis, wcslen(podpis), NULL, NULL);
		cout << endl;

	};
	void Pokaz_tabele(shared_ptr<Tabela>& Wyniki)
	{
		system("cls");
		kosci.clear();
		cout << "Aktualna tabela wynikow: " << endl;
		Wyniki->Tabela::Wypisywanie_tabeli();
		cout << "Aby kontynuowac, wcisnij enter" << endl;
		getchar(); getchar();
	}
};