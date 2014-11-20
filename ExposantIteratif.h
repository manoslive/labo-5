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
	double base_;
	double exposant_;
public:
	ExposantIteratif(double base, double exposant);
	operator double() const;

	double CalculeExposant();

	double GetBase() const;
	double GetExposant() const;

	void SetBase(double base);
	void SetExposant(double exposant);
};
#endif
