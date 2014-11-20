//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci    											//
//	Shaun Cooper & Emmanuel Beloin										    //
//	Créé le : 19-11-14													    //
//	Dernière modification : 19-11-14									        //
//	ExposantRecursif.cpp													//
//	Déclarations des méthodes d'un ExposantIteratif							//
//----------------------------------------------------------------------------//

#include "ExposantIteratif.h"

ExposantIteratif::ExposantIteratif(int base, int exposant)
{
	SetBase(base);
	SetExposant(exposant);
}
ExposantIteratif::operator double() const
{

}


int ExposantIteratif::GetBase() const
{
	return base_;
}
int ExposantIteratif::GetExposant() const
{
	return exposant_;
}

void ExposantIteratif::SetBase(int base)
{
	base_ = base;
}
void ExposantIteratif::SetExposant(int exposant)
{
	exposant_ = exposant;
}