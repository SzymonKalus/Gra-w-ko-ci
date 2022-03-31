#ifndef RUNDY_H
#define RUNDY_H
#include "kombinacje.h"
#include"Tabela.h"
#include "functions.h"

class runda_1 :
    public kombinacje
{
private:
    const int nr_rundy = 0;
public:
    bool Mozliwosci(shared_ptr<Tabela>& Wyniki);
    //Funkcja pozwala podj�� graczowi decyzje jakie ko�ci chce przerzuci� lub zako�czy� tur�

    void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki);
    //Funkcja losuje dla gracza ko�ci i pokazuje mu wyniki tej operacji. Pyta ona r�winie� gracza o kombinaje jak� chce policzy�
};

class runda_2 :
    public kombinacje
{
private:
    const int nr_rundy = 1;
public:
    bool Mozliwosci(string kombinacja, shared_ptr<Tabela>& Wyniki);
    //Funkcja pozwala podj�� graczowi decyzje jakie ko�ci chce przerzuci� lub zako�czy� tur�

    void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki);
    //Funkcja losuje dla gracza ko�ci i pokazuje mu wyniki tej operacji
};

class runda_3 :
    public kombinacje
{
private:
    const int nr_rundy = 2;
public:
    bool Mozliwosci(string kombinacja, shared_ptr<Tabela>& Wyniki);
    //Funkcja pozwala podj�� graczowi decyzje jakie ko�ci chce przerzuci� lub zako�czy� tur�

    void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki);
    //Funkcja losuje dla gracza ko�ci i pokazuje mu wyniki tej operacji
};

#endif