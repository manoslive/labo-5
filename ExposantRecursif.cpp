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

double ExposantRecursif::CalculExposant(int base, int exposant)
{
   if (exposant == 0) return exposant;
   if (exposant > 0)
   {
      if (exposant == 1)  return base;
      else
         return base* CalculExposant(base, exposant - 1);
   }
   else if (exposant < 0)
   {

   }
}