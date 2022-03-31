#include "functions.h"

/*struct jedna_runda {
	string jedynki, dwojki, trojki, czworki, piatki, szostki, para, dwie_pary, trzy_takie_same, maly, duzy, parzyste, nieparzyste, full, kareta, poker, szansa;
	int szkola, wynik;
};*/

int main() {
	srand(time(NULL));

	shared_ptr<Tabela> Wyniki = make_shared<Tabela>();
	auto p = make_unique<Zapisz_do_pliku>();
	string menu;

	try
	{
		while (true)
		{
			system("cls");
			cout << "##########################################################################\n";
			cout << "#                                                      #                 #\n";
			cout << "#   ####  ####    ###       #   #      #  #   ###    ####   ####   ###   #\n";
			cout << "#  #      #   #  #   #      #   #      # #   #   #  #      #        #    #\n";
			cout << "#  # ###  ####   #####      # # #      ##    #   #   ###   #        #    #\n";
			cout << "#  #   #  #  #   #   #      ## ##      # #   #   #      #  #        #    #\n";
			cout << "#   ###   #   #  #   #      #   #      #  #   ###   ####    ####   ###   #\n";
			cout << "#                                                                        #\n";
			cout << "##########################################################################\n\n";
			cout << "                        Witaj w grze w kosci! \n\n";
			cout << "Aby zaczac gre wpisz 'g', aby sprawdzic tabele wynikow wpisz 't', aby zakoczyc wpisz 'k' ";
			cin >> menu;

			if (menu == "g")
			{
				system("cls");
				auto p1 = make_unique<runda_1>();
				p1->Rozpocznij_runde(Wyniki);

				auto p2 = make_unique<runda_2>();
				p2->Rozpocznij_runde(Wyniki);

				auto p3 = make_unique<runda_3>();
				p3->Rozpocznij_runde(Wyniki);

				p->Zapisz_wynik(Wyniki);
			}
			else if (menu == "t")
			{
				p->Sprawdz_wyniki();
				cout << "Aby przejsc do menu, wcisnij enter";
				getchar(); getchar();
			}
			else if (menu == "k")
				break;
			else
				throw "Podano nieprawidlowy komunikat";
		}
	}
	catch(const char* komunikat)
	{
		cout << komunikat;
	}
	
	return 0;
}