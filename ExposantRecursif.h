#ifndef EXPOSANTRECURSIF_H_
#define EXPOSANTRECURSIF_H_
//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci    											//
//	Shaun Cooper & Emmanuel Beloin										    //
//	Créé le : 19-11-14													    //
//	Dernière modification : 19-11-14									        //
//	ExposantRecursif.h														//
//	Déclarations de la classe ExposantRecursif								//
//----------------------------------------------------------------------------//

class ExposantRecursif
{
public:
	ExposantRecursif(int base, int exposant);
	operator double() const;

	long CalculerFibonacciRecursif(int n);
};
#endif