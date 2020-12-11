#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
	uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() 
{
	uzytkownikMenadzer.logowanieUzytkownika();

	if (uzytkownikMenadzer.czyUzytkownikJestZalogowany())
	{
		adresatMenadzer = new AdresatMenadzer(nazwaPlikuZAdresatami, uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
	}
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
	uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
	if (uzytkownikMenadzer.czyUzytkownikJestZalogowany())
	{
		adresatMenadzer->dodajAdresata();
	}
	else
	{
		cout << "Zaloguj sie by dodac adresata." << endl;
		system("pause");
	}
}

void KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
	uzytkownikMenadzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::wypiszWszystkichAdresatow()
{
	adresatMenadzer->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() 
{
	uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}