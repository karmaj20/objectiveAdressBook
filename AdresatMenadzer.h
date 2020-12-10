#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H
#include <iostream>
#include <vector>
#include <Windows.h>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenadzer.h"

using namespace std;

class AdresatMenadzer {
	int idOstatniegoAdresata;
	int idZalogowanegoUzytkownika;
	vector <Adresat> adresaci;

	Adresat podajDaneNowegoAdresata();
	int pobierzIdOstatniegoAdresata();
	void wyswietlDaneAdresata(Adresat adresat);
	PlikZAdresatami plikZAdresatami;
public:
	AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
	int dodajAdresata();
	void wyswietlWszystkichAdresatow();
	void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
};

#endif