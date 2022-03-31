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
    //Funkcja pozwala podj¹æ graczowi decyzje jakie koœci chce przerzuciæ lub zakoñczyæ turê

    void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki);
    //Funkcja losuje dla gracza koœci i pokazuje mu wyniki tej operacji. Pyta ona rówinie¿ gracza o kombinaje jak¹ chce policzyæ
};

class runda_2 :
    public kombinacje
{
private:
    const int nr_rundy = 1;
public:
    bool Mozliwosci(string kombinacja, shared_ptr<Tabela>& Wyniki);
    //Funkcja pozwala podj¹æ graczowi decyzje jakie koœci chce przerzuciæ lub zakoñczyæ turê

    void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki);
    //Funkcja losuje dla gracza koœci i pokazuje mu wyniki tej operacji
};

class runda_3 :
    public kombinacje
{
private:
    const int nr_rundy = 2;
public:
    bool Mozliwosci(string kombinacja, shared_ptr<Tabela>& Wyniki);
    //Funkcja pozwala podj¹æ graczowi decyzje jakie koœci chce przerzuciæ lub zakoñczyæ turê

    void Rozpocznij_runde(shared_ptr<Tabela>& Wyniki);
    //Funkcja losuje dla gracza koœci i pokazuje mu wyniki tej operacji
};

#endif