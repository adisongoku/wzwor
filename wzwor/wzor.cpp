#include "wzor.h"


wzor::wzor()
{
	znak = 'x';
	dlugosc = 3;
}

wzor::wzor(int d, char z)
{
	znak = z;
	dlugosc = d;
}

wzor::~wzor()
{
	cout << "usunieto\n";
}

void wzor::drukuj()
{
	for (int i = 0; i < dlugosc; i++)
	{
		cout << znak;
	}
}

void wzor::opis()
{
	cout << dlugosc << "; " << znak << endl;
}

wzor wzor::zrob()
{
	int n;
	int i = 0;
	char tmp;
	int ilosc = 0;
	cout << "podaj liczbe wzorow: ";
	cin >> n;
	wzor** tab[] = new wzor[x];
	while (i < x)
	{
		cin >> tmp;
		cin >> ilosc;

		tab[i] = new wzor(ilosc, tmp);
	}
}

