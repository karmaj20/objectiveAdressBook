#include "KsiazkaAdresowa.h"

/*
	MENU KORZYSTAJACE Z KLAS POWIAZANYCH Z UZYTKOWNIKIEM
*/
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
	uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() 
{
	uzytkownikMenadzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
	uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

/*
	MENU KORZYSTAJACE Z KLAS POWIAZANYCH Z ADRESATEM
*/

void KsiazkaAdresowa::dodajAdresata()
{
	adresatMenadzer.dodajAdresata();
}

/*
	MENU KORZYSTAJACE Z KLAS POWIAZANYCH Z PRACA NA PLIKACH
*/

void KsiazkaAdresowa::wypiszWszystkichAdresatow()
{
	adresatMenadzer.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() 
{
	uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}