#ifndef UZYTKOWNIKMENADZER_H
#define UZYTKOWNIKMENADZER_H
#include <iostream>
#include <vector>
#include <Windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenadzer {
	int idZalogowanegoUzytkownika;
	vector <Uzytkownik> uzytkownicy;

	Uzytkownik podajDaneNowegoUzytkownika();
	int pobierzIdNowegoUzytkownika();
	bool czyIstniejeLogin(string login);
	PlikZUzytkownikami plikZUzytkownikami;

public:
	UzytkownikMenadzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {
		idZalogowanegoUzytkownika = 0;
		uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
	};
	int logowanieUzytkownika();
	void wylogujUzytkownika();
	bool czyUzytkownikJestZalogowany();
	int pobierzIdZalogowanegoUzytkownika();
	void rejestracjaUzytkownika();
	void zmianaHaslaZalogowanegoUzytkownika();
	void wypiszWszystkichUzytkownikow();
	void wczytajUzytkownikowZPliku();
	void zapiszWszystkichUzytkownikowDoPliku();
};

#endif