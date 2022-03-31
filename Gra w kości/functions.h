#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<iostream>
#include<string>
#include<windows.h>
#include<memory>
#include<algorithm>
#include<vector>
#include<fstream>

#include "Tabela.h"
#include "Zapisz_do_pliku.h"
#include "rundy.h"

using namespace std;

struct jedna_runda {
	string jedynki, dwojki, trojki, czworki, piatki, szostki, para, dwie_pary, trzy_takie_same, maly, duzy, parzyste, nieparzyste, full, kareta, poker, szansa;
	int szkola, wynik;
};
//Struktura odpowiedzialna za przechowywanie wyników danej rundy

int main();
//G³ówna funkcja programu odpowiedzialna za jego start i przebieg rozgrywki

#endif