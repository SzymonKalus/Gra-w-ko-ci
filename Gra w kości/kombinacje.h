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
    //Powy�sze funkcje licz� ilo�� punkt�w zdobytych przez gracza, kt�ry rzuci� konkretn� kombinacje

public:
    void Zwroc(string dane, const int nr, shared_ptr<Tabela>& Wyniki);
    //Funkcja przyjmuje jako argumenty nazwe wybranej przez gracza kombinacji, numer rozgrywanej rundy oraz wska�nik do tabeli wynik�w. Na podstawie tych dany wpisuje ilo�� otrzynanych punkt�w do tabeli
};

#endif
