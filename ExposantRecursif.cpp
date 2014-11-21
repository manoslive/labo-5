//----------------------------------------------------------------------------//
//  Labo 5 - Liste de Fibonacci    									            		//
//	Shaun Cooper & Emmanuel Beloin								            		   //
//	Créé le : 19-11-14												               	   //
//	Dernière modification : 19-11-14								            	      //
//	ExposantRecursif.cpp											                  		//
//	Déclarations des méthodes d'un ExposantRecursif			         				//
//----------------------------------------------------------------------------//
#include "ExposantRecursif.h"
#include <iostream>
using namespace std;

ExposantRecursif::ExposantRecursif()
{
	SetBase(0);
	SetExposant(0);
}

ExposantRecursif::ExposantRecursif(double base, int exposant)
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
	if (base >= 0) // Si la base est positive on l'affecte
	base_ = base;
}

void ExposantRecursif::SetExposant(int exposant)
{
	exposant_ = exposant;
}

double ExposantRecursif::CalculExposant(int base, int exposant)
{
	double calcul;
	if (exposant == 0) // Si l'exposant vaut 0, on retourne 1. C'est là où la récursivité se termine
		return 1;
	calcul = CalculExposant(base, exposant / 2); // On affecte le résultat de CalculExposant dans calcul
	if (exposant % 2 == 0) // Si l'exposant est pair
		return calcul*calcul;
	else // Sinon
	{
		if (exposant > 0) // Dans le cas où l'exposant est positif
			return base*calcul*calcul;
		else // Dans le cas où l'exposant est négatif
			return (calcul*calcul) / base;
	}
}