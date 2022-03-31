#ifndef GRA_H
#define GRA_H
#include "functions.h"
#include "Tabela.h"

class gra
{
public:
	vector<int> kosci;
	//Vekttor przechowuj�cy ko�ci wyrzucone przez gracza

	int reka;
	//Zminna odpowiadaj�ca za mno�nik punkt�w w przypadku rzucenia danej kombinacji z r�ki

	const string kolejnosc[17];
	//String z nazwami wszystkich kombinacji

	virtual void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki) {};
	//Wirtualna klasa odpowiedzialna za rozpocz�cie rundy

	void Rzuc();
	//Funkcja odpowiedzialna za wylosowani ko�ci dla gracza

	void Przerzuc(string dane);
	//Funkcja przyjmuj�ca wylosowane ko�ci i przerzucaj�ca te wybrane przez gracza

	void Pokaz();
	//Funkcja dopowiedzialna z pokazanie wylosowanych ko�ci w konsoli

	void Pokaz_tabele(shared_ptr<Tabela>& Wyniki);
	//Funkcja odpowiedzialna za pokazanie tabeli wynik�w w konsoli
};

#endif