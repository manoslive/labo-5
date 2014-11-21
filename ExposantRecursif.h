#ifndef EXPOSANTRECURSIF_H_
#define EXPOSANTRECURSIF_H_
//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci    											//
//	Shaun Cooper & Emmanuel Beloin										    //
//	Cr�� le : 19-11-14													    //
//	Derni�re modification : 19-11-14									        //
//	ExposantRecursif.h														//
//	D�clarations de la classe ExposantRecursif								//
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
	Extrant: le r�sultat en double
	Description: Permet de calculer, de facon r�cursive, une puissance
	*/
	double CalculExposant(double base, double exposant);
};
#endif