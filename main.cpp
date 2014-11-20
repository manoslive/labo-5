//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci                                             //
//	Shaun Cooper & Emmanuel Beloin                                          //
//	Créé le : 19-11-14										                //
//	Dernière modification : 19-11-14                                        //
//	Main.cpp                                                                //
//	Programme qui permet qui implante de façon itérative et récursive		//
// l'évaluation pour n de la suite de Fibonacci							//
//----------------------------------------------------------------------------//

#include <iostream>
using namespace std;

long CalculerFibonacciIteratif(int n)
{
	int reproducteurs = 0;
	int anciens = 1;
	int totale;
	if (n >= 3)
	{
		for (int i = 3; i <= n; i++)
		{
			totale = reproducteurs + anciens;
			anciens = reproducteurs;
			reproducteurs = totale;
		}
	}
	return reproducteurs;
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
	//cout << CalculerFibonacciRecursif(2) << endl;
	cout << CalculerFibonacciIteratif(6) << endl;
}
