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

double ExposantRecursif::CalculExposant(double base, double exposant)
{
	if (exposant == 0) // Dernière étape de la récursivité, on retourne 1
		return 1;
	if (exposant > 0) // L'exposant est positif	
	return base * (CalculExposant(base, exposant - 1));
	if (exposant < 0) // L'exposant est négatif
		return 1 / base * (CalculExposant(base, exposant + 1));
}