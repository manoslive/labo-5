//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci    											//
//	Shaun Cooper & Emmanuel Beloin										    //
//	Créé le : 19-11-14													    //
//	Dernière modification : 19-11-14									        //
//	ExposantRecursif.cpp													//
//	Déclarations des méthodes d'un ExposantIteratif							//
//----------------------------------------------------------------------------//

#include "ExposantIteratif.h"
ExposantIteratif::ExposantIteratif()
{
	SetBase(0);
	SetExposant(0);
}
ExposantIteratif::ExposantIteratif(double base, double exposant)
{
	SetBase(base);
	SetExposant(exposant);
}
ExposantIteratif::operator double() const
{
	return 0;
}
double ExposantIteratif::CalculeExposant()
{
	if (GetExposant() == 0) return 1; //si l'exposant est 0, retourne 1
	double resultat = GetBase(); //intialise le resultat à la base

	if (GetExposant() > 0) //if l'exposant est positif
	{
		for (int i = 1; i < GetExposant(); i++)//boucle qui permet d'effectuer le calcul le nombre de fois de l'exposant
			resultat *= GetBase();

		return resultat;
	}
	else
	//if (GetExposant() < 0) //if l'exposant est négatif
	{
		for (int i = 1; i < -GetExposant(); i++)//boucle qui permet d'effectuer le calcul le nombre de fois de l'exposant
			resultat *= GetBase();

		return 1 / resultat;
	}
}
double ExposantIteratif::GetBase() const
{
	return base_;
}
double ExposantIteratif::GetExposant() const
{
	return exposant_;
}

void ExposantIteratif::SetBase(double base)
{
	//if (base >= 0)
		base_ = base;
}
void ExposantIteratif::SetExposant(double exposant)
{
	exposant_ = exposant;
}