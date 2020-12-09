#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami {
	const string nazwaPlikuZAdresatami;
	int idOstatniegoAdresata;

	bool czyPlikJestPusty();
	string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
	int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
	string pobierzLiczbe(string tekst, int pozycjaZnaku);
	Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
public:
	PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
	void dopiszAdresataDoPliku(Adresat adresat);
	int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector<Adresat> adresaci);
};

#endif