#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>

#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa {
	UzytkownikMenadzer uzytkownikMenadzer;
	AdresatMenadzer* adresatMenadzer;
	const string nazwaPlikuZAdresatami;
public:
	/*
	KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
		: uzytkownikMenadzer(nazwaPlikuZUzytkownikami), adresatMenadzer(nazwaPlikuZAdresatami) {
		uzytkownikMenadzer.wczytajUzytkownikowZPliku();
		adresatMenadzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
	};
	*/
	KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string NAZWAPLIKUZADRESATAMI) :
		uzytkownikMenadzer(nazwaPlikuZUzytkownikami), nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) { };
	~KsiazkaAdresowa() {
		delete adresatMenadzer;
	}

	void czyUzytkownikJestZalogowany();
	void rejestracjaUzytkownika();
	void logowanieUzytkownika();
	void zmianaHaslaZalogowanegoUzytkownika();
	void wypiszWszystkichUzytkownikow();
	void wypiszWszystkichAdresatow();
	void dodajAdresata();
};

#endif