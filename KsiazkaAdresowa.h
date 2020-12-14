#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>

#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa {
	UzytkownikMenadzer uzytkownikMenadzer;
	AdresatMenadzer* adresatMenadzer;
	const string NAZWA_PLIKU_Z_ADRESATAMI;
public:
	KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) :
		uzytkownikMenadzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
	 {
		adresatMenadzer = NULL;
	};
	~KsiazkaAdresowa() {
		delete adresatMenadzer;
		adresatMenadzer = NULL;
	}

	char wybierzOpcjeZMenuGlownego();
	char wybierzOpcjeZMenuUzytkownika();
	bool czyUzytkownikJestZalogowany();

	void wypiszWszystkichUzytkownikow();

	// MENU GLOWNE
	void rejestracjaUzytkownika();
	void logowanieUzytkownika();
	void wylogowanieUzytkownika();

	// MENU UZYTKOWNIKA
	void dodajAdresata();
	void wyszukajAdresatowPoImieniu();
	void wyszukajAdresatowPoNazwisku();
	void wypiszWszystkichAdresatow();
	void usunAdresata();
	void edytujAdresata();
	void zmianaHaslaZalogowanegoUzytkownika();
};

#endif