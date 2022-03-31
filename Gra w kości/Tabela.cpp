#include "Tabela.h"

class Tabela {
public:
	jedna_runda Kolumna[3];

	Tabela()
	{
		for (int i = 0; i < 3; i++)
		{
			Kolumna[i].jedynki = "   ";
			Kolumna[i].dwojki = "   ";
			Kolumna[i].trojki = "   ";
			Kolumna[i].czworki = "   ";
			Kolumna[i].piatki = "   ";
			Kolumna[i].szostki = "   ";
			Kolumna[i].szkola = 0;
			Kolumna[i].para = "  ";
			Kolumna[i].dwie_pary = "  ";
			Kolumna[i].trzy_takie_same = "  ";
			Kolumna[i].maly = "  ";
			Kolumna[i].duzy = "  ";
			Kolumna[i].parzyste = "  ";
			Kolumna[i].nieparzyste = "  ";
			Kolumna[i].full = "  ";
			Kolumna[i].kareta = "  ";
			Kolumna[i].poker = "   ";
			Kolumna[i].szansa = "  ";
			Kolumna[i].wynik = 0;
		}
	};
	void Wypisywanie_tabeli()
	{
		string znaki_szkola[3];
		string znaki_wynik[3];
		for (int i = 0; i < 3; i++)
		{
			if (Kolumna[i].szkola < 0) {
				znaki_szkola[i] = to_string(Kolumna[i].szkola);
				if (znaki_szkola[i].size() != 3)
					znaki_szkola[i].resize(3, ' ');
			}
			else
				znaki_szkola[i] = " X ";

			znaki_wynik[i] = to_string(Kolumna[i].wynik);
			if (znaki_wynik[i].size() != 3)
				znaki_wynik[i].resize(3, ' ');
		}

		cout << "---------------------" << endl;
		cout << "| 1s | " << Kolumna[0].jedynki << "| " << Kolumna[1].jedynki << "| " << Kolumna[2].jedynki << "| " << endl;
		cout << "| 2s | " << Kolumna[0].dwojki << "| " << Kolumna[1].dwojki << "| " << Kolumna[2].dwojki << "| " << endl;
		cout << "| 3s | " << Kolumna[0].trojki << "| " << Kolumna[1].trojki << "| " << Kolumna[2].trojki << "| " << endl;
		cout << "| 4s | " << Kolumna[0].czworki << "| " << Kolumna[1].czworki << "| " << Kolumna[2].czworki << "| " << endl;
		cout << "| 5s | " << Kolumna[0].piatki << "| " << Kolumna[1].piatki << "| " << Kolumna[2].piatki << "| " << endl;
		cout << "| 6s | " << Kolumna[0].szostki << "| " << Kolumna[1].szostki << "| " << Kolumna[2].szostki << "| " << endl;
		cout << "---------------------" << endl;
		cout << "| S  | " << znaki_szkola[0] << "| " << znaki_szkola[1] << "| " << znaki_szkola[2] << "| " << endl;
		cout << "---------------------" << endl;
		cout << "| P  | " << Kolumna[0].para << " | " << Kolumna[1].para << " | " << Kolumna[2].para << " | " << endl;
		cout << "| 2P | " << Kolumna[0].dwie_pary << " | " << Kolumna[1].dwie_pary << " | " << Kolumna[2].dwie_pary << " | " << endl;
		cout << "| 3  | " << Kolumna[0].trzy_takie_same << " | " << Kolumna[1].trzy_takie_same << " | " << Kolumna[2].trzy_takie_same << " | " << endl;
		cout << "| M  | " << Kolumna[0].maly << " | " << Kolumna[1].maly << " | " << Kolumna[2].maly << " | " << endl;
		cout << "| D  | " << Kolumna[0].duzy << " | " << Kolumna[1].duzy << " | " << Kolumna[2].duzy << " | " << endl;
		cout << "| Pa | " << Kolumna[0].parzyste << " | " << Kolumna[1].parzyste << " | " << Kolumna[2].parzyste << " | " << endl;
		cout << "| Np | " << Kolumna[0].nieparzyste << " | " << Kolumna[1].nieparzyste << " | " << Kolumna[2].nieparzyste << " | " << endl;
		cout << "| F  | " << Kolumna[0].full << " | " << Kolumna[1].full << " | " << Kolumna[2].full << " |" << endl;
		cout << "| Ka | " << Kolumna[0].kareta << " | " << Kolumna[1].kareta << " | " << Kolumna[2].kareta << " |" << endl;
		cout << "| Po | " << Kolumna[0].poker << "| " << Kolumna[1].poker << "| " << Kolumna[2].poker << "|" << endl;
		cout << "| Sz | " << Kolumna[0].szansa << " | " << Kolumna[1].szansa << " | " << Kolumna[2].szansa << " |" << endl;
		cout << "---------------------" << endl;
		cout << "| Wy | " << znaki_wynik[0] << "| " << znaki_wynik[1] << "| " << znaki_wynik[2] << "| " << endl;
		cout << "---------------------" << endl;
	};
};