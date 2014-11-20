//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci                                             //
//	Shaun Cooper & Emmanuel Beloin                                          //
//	Créé le : 19-11-14										                //
//	Dernière modification : 19-11-14                                        //
//	Main.cpp                                                                //
//	Programme qui permet qui implante de façon itérative et récursive		//
// l'évaluation pour n de la suite de Fibonacci							//
//----------------------------------------------------------------------------//

#include "ExposantRecursif.h"
#include "ExposantIteratif.h"
#include <iostream>
using namespace std;


/*
	CalculerFibonacciIteratif
	Intrant: n(int) -- nombre de mois
	Extrant: long --nb total de lapins
	Description: Suite de fibonacci de façon itérative
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
Description: Suite de fibonacci de façon récursive
*/
long CalculerFibonacciRecursif(int nombreDeMois)
{
	if (nombreDeMois == 0 || nombreDeMois == 1)  return nombreDeMois;
	else
		return CalculerFibonacciRecursif(nombreDeMois - 1) + CalculerFibonacciRecursif(nombreDeMois - 2);
}

int main()
{
	//  cout << "VERSION RECURSIVE: " << endl;
	//  cout << CalculerFibonacciRecursif(8) << endl;
	//  
	//  cout << "VERSION ITERATIVE: " << endl;
	//  cout << CalculerFibonacciIteratif(6) << endl;
	int exposant;
	double base;
	do
	{
		cout << "-------" << "0 a la 0 pour mettre fin au programme" << "-------" << endl;
		cout << "Entrez la base" << endl;
		cin >> base;
		cout << "Entrez l'exposant" << endl;
		cin >> exposant;
		if (base != 0 && exposant != 0)
		{
			ExposantRecursif expRecursif(base, exposant);
			ExposantIteratif exposantIteratif(base, exposant);
			cout << "Reponse iterative: " << exposantIteratif.CalculeExposant() << endl;
			cout << "Reponse recursive: " << expRecursif.CalculExposant(base,exposant) << endl;
		}
		else
			cout << "Fin du programme\nBonne fin de journee" << endl;
	} while (base != 0 && exposant != 0);

	return 0;

}
