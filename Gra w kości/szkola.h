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
    //Funkcja liczy iloœæ wyrzuconych przez gracza jedynek i zwraca odpowiedni¹ iloœæ punktów

    int dwojki_k();
    //Funkcja liczy iloœæ wyrzuconych przez gracza dwójek i zwraca odpowiedni¹ iloœæ punktów

    int trojki_k();
    //Funkcja liczy iloœæ wyrzuconych przez gracza trójek i zwraca odpowiedni¹ iloœæ punktów

    int czworki_k();
    //Funkcja liczy iloœæ wyrzuconych przez gracza czwórek i zwraca odpowiedni¹ iloœæ punktów

    int piatki_k();
    //Funkcja liczy iloœæ wyrzuconych przez gracza pi¹tek i zwraca odpowiedni¹ iloœæ punktów

    int szostki_k();
    //Funkcja liczy iloœæ wyrzuconych przez gracza szóstek i zwraca odpowiedni¹ iloœæ punktów

    void koncowy_wynik(int uzyskana_wartosc, const int nr, shared_ptr<Tabela>& Wyniki);
    //Funkcja zwraca aktualn¹ iloœæ punktów któr¹ gracz otrzymuje za szko³e
};

#endif

