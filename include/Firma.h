#pragma once
#ifndef Firma_H
#define  Firma_H
#include<iostream>
#include"Eleman.h"

using namespace std;

class Firma
{
public:
	Firma* sol;
	Firma* sag;
	string firmaAd;
	Eleman* eleman;
	int derinlik;
	int calisanSayisi;
	 
	Firma* Ekle(Firma* kok, string firmaAd, int derinlik);
	Firma* yeniDugumEkle(string firmaAd);
	Firma* FirmaDengele(Firma* kok);
	Firma* solDondurme(Firma* x);
	Firma* sagDondurme(Firma* y);
	void postorderSiralama(Firma* kok);
	int dengeKatSayisi(Firma* N);
	int yukseklik(Firma* N);

};

#endif