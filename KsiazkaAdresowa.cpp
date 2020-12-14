#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
	uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
	uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika() 
{
	uzytkownikMenadzer.logowanieUzytkownika();

	if (uzytkownikMenadzer.czyUzytkownikJestZalogowany())
	{
		adresatMenadzer = new AdresatMenadzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
	}
}	

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
	uzytkownikMenadzer.wylogujUzytkownika();
	delete adresatMenadzer;
	adresatMenadzer = NULL;
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

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
	adresatMenadzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
	adresatMenadzer->wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::edytujAdresata()
{
	adresatMenadzer->edytujAdresata();
}

void KsiazkaAdresowa::usunAdresata()
{
	adresatMenadzer->usunAdresata();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
	return uzytkownikMenadzer.wybierzOpcjeZMenuGlownego();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
	return uzytkownikMenadzer.wybierzOpcjeZMenuUzytkownika();
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
	return uzytkownikMenadzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::wypiszWszystkichAdresatow()
{
	adresatMenadzer->wyswietlWszystkichAdresatow();
}
