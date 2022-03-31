#ifndef GRA_H
#define GRA_H
#include "functions.h"
#include "Tabela.h"

class gra
{
public:
	vector<int> kosci;
	//Vekttor przechowuj¹cy koœci wyrzucone przez gracza

	int reka;
	//Zminna odpowiadaj¹ca za mno¿nik punktów w przypadku rzucenia danej kombinacji z rêki

	const string kolejnosc[17];
	//String z nazwami wszystkich kombinacji

	virtual void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki) {};
	//Wirtualna klasa odpowiedzialna za rozpoczêcie rundy

	void Rzuc();
	//Funkcja odpowiedzialna za wylosowani koœci dla gracza

	void Przerzuc(string dane);
	//Funkcja przyjmuj¹ca wylosowane koœci i przerzucaj¹ca te wybrane przez gracza

	void Pokaz();
	//Funkcja dopowiedzialna z pokazanie wylosowanych koœci w konsoli

	void Pokaz_tabele(shared_ptr<Tabela>& Wyniki);
	//Funkcja odpowiedzialna za pokazanie tabeli wyników w konsoli
};

#endif