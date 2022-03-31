#ifndef KOMBINACJE_H
#define KOMBINACJE_H
#include "szkola.h"
#include "functions.h"

class kombinacje :
    public szkola
{
private:
    int para_k();
    int dwie_pary_k();
    int trzy_takie_same_k();
    int maly_k();
    int duzy_k();
    int parzyste_k();
    int nieparzyste_k();
    int full_k();
    int kareta_k();
    int poker_k();
    int szansa_k();
    //Powy¿sze funkcje licz¹ iloœæ punktów zdobytych przez gracza, który rzuci³ konkretn¹ kombinacje

public:
    void Zwroc(string dane, const int nr, shared_ptr<Tabela>& Wyniki);
    //Funkcja przyjmuje jako argumenty nazwe wybranej przez gracza kombinacji, numer rozgrywanej rundy oraz wskaŸnik do tabeli wyników. Na podstawie tych dany wpisuje iloœæ otrzynanych punktów do tabeli
};

#endif
