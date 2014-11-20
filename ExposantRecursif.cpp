//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci    									            		//
//	Shaun Cooper & Emmanuel Beloin								            		   //
//	Créé le : 19-11-14												               	   //
//	Dernière modification : 19-11-14								            	      //
//	ExposantRecursif.cpp											                  		//
//	Déclarations des méthodes d'un ExposantRecursif			         				//
//----------------------------------------------------------------------------//

#include "ExposantRecursif.h"

ExposantRecursif::ExposantRecursif(int base, int exposant)
{
   SetBase(base);
   SetExposant(exposant);
}
ExposantRecursif::operator double() const
{
   return 0;
}


int ExposantRecursif::GetBase() const
{
   return base_;
}
int ExposantRecursif::GetExposant() const
{
   return exposant_;
}

void ExposantRecursif::SetBase(int base)
{
   base_ = base;
}
void ExposantRecursif::SetExposant(int exposant)
{
   exposant_ = exposant;
}