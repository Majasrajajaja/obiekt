#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ryby
{
public:
	string gatunek;
	string wymiar_ochronny;
	string okres_ochronny;
	string ilosc;
	int ktora_ryba;

	void wczytaj_rybe();
	void pokaz_rybe();

};

