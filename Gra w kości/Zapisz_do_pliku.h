#ifndef ZAPISZ_DO_PLIKU_H
#define ZAPISZ_DO_PLIKU_H
#include "functions.h"

class Zapisz_do_pliku
{
public:
	void Zapisz_wynik(shared_ptr<Tabela>& Wyniki);
	//Funkcja pozwala zapisaæ do pliku wynik uzyskany przez gracz

	void Sprawdz_wyniki();
	//Funkcja wypisuje na ekranie konsoli wszystkie wyniki gier
};

#endif
