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
	UzytkownikMenadzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};
	int logowanieUzytkownika();
	void rejestracjaUzytkownika();
	void zmianaHaslaZalogowanegoUzytkownika();
	void wypiszWszystkichUzytkownikow();
	void wczytajUzytkownikowZPliku();
	void zapiszWszystkichUzytkownikowDoPliku();
};

#endif