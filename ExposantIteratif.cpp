//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci    											//
//	Shaun Cooper & Emmanuel Beloin										    //
//	Cr�� le : 19-11-14													    //
//	Derni�re modification : 19-11-14									        //
//	ExposantRecursif.cpp													//
//	D�clarations des m�thodes d'un ExposantIteratif							//
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
	double resultat = GetBase();
	if (GetExposant() > 0)
	{
		for (int i = 0; i < GetExposant()-1; i++)
		{
			resultat += resultat * GetBase();
		}
		return resultat;
	}
	else
	{
		for (int i = 0; i < GetExposant(); i--)
		{
			resultat += (GetBase()*GetBase());
		}
		return resultat;
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
	if (base >= 0)
		base_ = base;
}
void ExposantIteratif::SetExposant(double exposant)
{
	exposant_ = exposant;
}