#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "PlikTekstowy.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami: public PlikTekstowy {
	const string NAZWA_PLIKU_Z_ADRESATAMI;
	int idOstatniegoAdresata;
	const string nazwaTymczasowegoPlikuZAdresatami;

	string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
	int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
	int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
	string pobierzLiczbe(string tekst, int pozycjaZnaku);
	Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

	void ustawIdOstatniegoAdresata(int noweIdOstatniegoAdresata);
	void usunPlik(string nazwaPlikuZRozszerzeniem);
	void zmienNazwePliku(string staraNazwa, string nowaNazwa);
	int pobierzZPlikuIdOstatniegoAdresata();
	int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata, int idOstatniegoAdresata);
	int podajIdWybranegoAdresata();
	void usunWybranegoAdresataZPliku(int numerUsuwanejLinii);
	void edytujWybranaLinieWPliku(int numerLiniiEdytowanegoAdresata, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
public:
	PlikZAdresatami(string nazwaPliku) :
		PlikTekstowy(nazwaPliku), nazwaTymczasowegoPlikuZAdresatami("Adresaci_tymczasowo.txt") 
	{
		idOstatniegoAdresata = pobierzIdOstatniegoAdresata();
	};
	int dopiszAdresataDoPliku(Adresat adresat);
	vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
	int usunAdresata(vector <Adresat>& adresaci);
	void zaktualizujDaneWybranegoAdresata(Adresat adresat);
	int pobierzIdOstatniegoAdresata();
};

#endif