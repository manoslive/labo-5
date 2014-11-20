//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci                                             //
//	Shaun Cooper & Emmanuel Beloin                                          //
//	Cr�� le : 19-11-14										                //
//	Derni�re modification : 19-11-14                                        //
//	Main.cpp                                                                //
//	Programme qui permet qui implante de fa�on it�rative et r�cursive		//
// l'�valuation pour n de la suite de Fibonacci							//
//----------------------------------------------------------------------------//

#include <iostream>
using namespace std;

long CalculerFibonacciIteratif(int n)
{
	if (n >= 3)
	{
		while ()
	}
}

long CalculerFibonacciRecursif(int nombreDeMois)
{
   int valeur = 0;
   if (nombreDeMois >= 3)
   {
      if (nombreDeMois <= 0)
         return 0;

      if (nombreDeMois == 1 || nombreDeMois == 2)
         return 1;

      if (valeur != 0)
         return valeur;
   }
   valeur = CalculerFibonacciRecursif(nombreDeMois - 1) + CalculerFibonacciRecursif(nombreDeMois - 2);
   return valeur;
}

int main()
{
   cout << CalculerFibonacciRecursif(2);
   return 0;
}
