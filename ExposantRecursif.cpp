//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci    											//
//	Shaun Cooper & Emmanuel Beloin										    //
//	Cr�� le : 19-11-14													    //
//	Derni�re modification : 19-11-14									        //
//	ExposantRecursif.cpp													//
//	D�clarations des m�thodes d'un ExposantRecursif							//
//----------------------------------------------------------------------------//

#include "ExposantRecursif.h"

long ExposantRecursif::CalculerFibonacciRecursif(int n)
{
   int valeur = 0;

   if (n <= 0)
   {
      return 0;
   }

   if (n == 1 || n == 2)
   {
      return 1;
   }

   if (valeur != 0)
   {
      return valeur;
   }

   valeur = CalculerFibonacciRecursif(n - 1) + CalculerFibonacciRecursif(n - 2);
   return valeur;
}