#include <iostream>
#include "Ryby.h"
using std::cout;
using std::endl;

int main()
{
    Ryby r[5];
    for (int i = 0; i < 5; i++) {
        r[i].ktora_ryba = i + 1;
        r[i].wczytaj_rybe();
        r[i].pokaz_rybe();
    }
    return 0;

    void wczytaj_rybe();
}
