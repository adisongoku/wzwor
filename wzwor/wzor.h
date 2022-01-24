#pragma once
#include <iostream>
#include <string>
#ifndef WZOR_H_
#define WZOR_H_



using namespace std;

class wzor
{
private:
	char znak;
	int dlugosc;

public:
	wzor();
	wzor(int d, char z);
	~wzor();

	void drukuj();
	void opis();
	wzor zrob();


};


#endif // !WZOR_H_

