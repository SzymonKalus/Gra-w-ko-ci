#ifndef SZKOLA_H
#define GSZKOLA_H
#include "gra.h"
#include "Tabela.h"
#include "functions.h"


class szkola :
    public gra
{
public:
    int jedynki_k();
    //Funkcja liczy ilo�� wyrzuconych przez gracza jedynek i zwraca odpowiedni� ilo�� punkt�w

    int dwojki_k();
    //Funkcja liczy ilo�� wyrzuconych przez gracza dw�jek i zwraca odpowiedni� ilo�� punkt�w

    int trojki_k();
    //Funkcja liczy ilo�� wyrzuconych przez gracza tr�jek i zwraca odpowiedni� ilo�� punkt�w

    int czworki_k();
    //Funkcja liczy ilo�� wyrzuconych przez gracza czw�rek i zwraca odpowiedni� ilo�� punkt�w

    int piatki_k();
    //Funkcja liczy ilo�� wyrzuconych przez gracza pi�tek i zwraca odpowiedni� ilo�� punkt�w

    int szostki_k();
    //Funkcja liczy ilo�� wyrzuconych przez gracza sz�stek i zwraca odpowiedni� ilo�� punkt�w

    void koncowy_wynik(int uzyskana_wartosc, const int nr, shared_ptr<Tabela>& Wyniki);
    //Funkcja zwraca aktualn� ilo�� punkt�w kt�r� gracz otrzymuje za szko�e
};

#endif

