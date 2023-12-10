#include "Ryby.h"
#include <iostream>
#include <fstream>
#include <string>



using std::fstream;
using std::ios;
using std::cout;
using std::endl;

void Ryby::wczytaj_rybe() {
	fstream plik;
	plik.open("C:/Users/mzawi/OneDrive/Dokumenty/proramm/obiektowe/cw2/rybka.txt", ios::in);

	if (plik.good() == true) {

		int nr_linii = (ktora_ryba - 1) * 4 + 1;
		string linia;
		int licznik = 1;
		while (getline(plik, linia)) {
			if (licznik == nr_linii)  gatunek = linia;
			if (licznik == nr_linii + 1)  wymiar_ochronny = linia;
			if (licznik == nr_linii + 2)  okres_ochronny = linia;
			if (licznik == nr_linii + 3)  ilosc = linia;

			licznik++;
		}
		plik.close();
	}
	else {
		cout << "Nie ma dostepu do pliku";
		exit(0);
	}

}
void Ryby::pokaz_rybe() {
	cout << "=======================================" << endl;
	cout << gatunek << endl;
	cout << "Wymiar ochronny: " << wymiar_ochronny << endl;
	cout << "Okres oochronny: " << okres_ochronny << endl;
	cout << "Ile sztuk na dobe: " << ilosc << endl;
	cout << "=======================================" << endl << endl;
}