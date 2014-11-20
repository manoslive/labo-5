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

/*
	CalculerFibonacciIteratif
	Intrant: n(int) -- nombre de mois
	Extrant: long --nb total de lapins
	Description: Suite de fibonacci de f�con it�rative
*/
long CalculerFibonacciIteratif(int n)
{
	int reproducteurs = 1;
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

/*
CalculerFibonacciIteratif
Intrant: nombreDeMois(int)
Extrant: long --nb total de lapins
Description: Suite de fibonacci de f�con r�cursive
*/
long CalculerFibonacciRecursif(int nombreDeMois)
{
   if (nombreDeMois == 0 || nombreDeMois == 1)  return nombreDeMois;
   else
      return CalculerFibonacciRecursif(nombreDeMois - 1) + CalculerFibonacciRecursif(nombreDeMois - 2);
}

int main()
{
   cout << "VERSION RECURSIVE: " << endl;
   cout << CalculerFibonacciRecursif(8) << endl;
	  
   cout << "VERSION ITERATIVE: " << endl;
	cout << CalculerFibonacciIteratif(6) << endl;
    return 0;
}
