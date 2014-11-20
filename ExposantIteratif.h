#ifndef EXPOSANTITERATIF_H_
#define EXPOSANTITERATIF_H_
//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci    											//
//	Shaun Cooper & Emmanuel Beloin										    //
//	Créé le : 19-11-14													    //
//	Dernière modification : 19-11-14									        //
//	ExposantIteratif.h														//
//	Déclarations de la classe ExposantIteratif								//
//----------------------------------------------------------------------------//

class ExposantIteratif
{
public:
	ExposantIteratif(int base, int exposant);
	operator double() const;

	long CalculerFibonacciIteratif(int n);
};
#endif