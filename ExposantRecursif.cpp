//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci    									            		//
//	Shaun Cooper & Emmanuel Beloin								            		   //
//	Cr�� le : 19-11-14												               	   //
//	Derni�re modification : 19-11-14								            	      //
//	ExposantRecursif.cpp											                  		//
//	D�clarations des m�thodes d'un ExposantRecursif			         				//
//----------------------------------------------------------------------------//
#include "ExposantRecursif.h"
#include <iostream>
using namespace std;

ExposantRecursif::ExposantRecursif()
{
	SetBase(0);
	SetExposant(0);
}

ExposantRecursif::ExposantRecursif(int base, int exposant)
{
	SetBase(base);
	SetExposant(exposant);
}
ExposantRecursif::operator double() const
{
	return 0;
}

void ExposantRecursif::SetBase(double base)
{
	if (base >= 0)
	base_ = base;
}

void ExposantRecursif::SetExposant(int exposant)
{
	if (exposant >= 0)
		exposant_ = exposant;
}

double ExposantRecursif::CalculExposant(int base, int exposant)
{

	double calcul;
	if (exposant == 0)
		return 1;
	calcul = CalculExposant(base, exposant / 2);
	if (exposant % 2 == 0)
		return calcul*calcul;
	else
	{
		if (exposant > 0)
			return base*calcul*calcul;
		else
			return (calcul*calcul) / base;
	}
}