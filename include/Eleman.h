#pragma once
#ifndef Elemen_H
#define  Eleman_H
#include<iostream>

using namespace std;

class Eleman
{
public:
	string adSoyad;
	int yil;
	int derinlik;
	Eleman* sol;
	Eleman* sag;

	Eleman* Ekle(Eleman* root, string adSoyad, int yil);
	Eleman* yeniDugumEkle(string adSoyad, int yil);
	int dengeKatSayisi(Eleman* N);
	void postorderSiralama(Eleman* root);
	Eleman* solDondurme(Eleman* x);
	Eleman* sagDondurme(Eleman* y);
	int yukseklik(Eleman* N);
};

#endif