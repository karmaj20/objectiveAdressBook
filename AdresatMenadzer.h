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
	const int idZalogowanegoUzytkownika;
	vector <Adresat> adresaci;

	Adresat podajDaneNowegoAdresata();
	int pobierzIdOstatniegoAdresata();
	void wyswietlDaneAdresata(Adresat adresat);
	PlikZAdresatami plikZAdresatami;
public:
	/*AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};*/
	AdresatMenadzer(string nazwaPlikuZAdresatami, int IDZALOGOWANEGOUZYTKOWNIKA) :
		plikZAdresatami(nazwaPlikuZAdresatami), idZalogowanegoUzytkownika(IDZALOGOWANEGOUZYTKOWNIKA)
	{
		adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
	};

	int dodajAdresata();
	void wyswietlWszystkichAdresatow();
	//void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
};

#endif