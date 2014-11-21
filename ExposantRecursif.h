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
	int base_;
	int exposant_;
public:
	//--- Constructeurs
	ExposantRecursif();
	ExposantRecursif(double base, int exposant);
	operator double() const;

	//--- Accesseurs
	double GetBase() const { return base_; };
	int GetExposant() const{ return exposant_; };

	//--- Mutateurs
	void SetBase(double base);
	void SetExposant(int exposant);

	/*
	CalculExposant
	Intrant: la base en int, l'exposant en int
	Extrant: le résultat en double
	Description: Permet de calculer, de facon récursive, une puissance
	*/
	double CalculExposant(double base, double exposant);
};
#endif