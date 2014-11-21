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
	//--Attributs--
	double base_;
	double exposant_;
public:
	//--Constructeur par default//
	ExposantIteratif();
	/*
		ExposantIteratif
		Intrant:base(double), exposant(double)
		Extrant:aucun(constructeur)
		Descrption:Lors de la contruction, la base et l'esposant
					sont Set dans leurs attributs respectifs.
	*/
	ExposantIteratif(double base, double exposant);
	/*
		CalculeExposant()
		Intrant:Aucun (utilise accesseurs et mutateurs)
		Extrant:double(le resultat du calcul)
		Description: Permet de calculer un calcul d'un exposant
	*/
	double CalculeExposant();

	operator double() const;

	//--Accesseurs--
	double GetBase() const;
	double GetExposant() const;
	//--Mutateurs--
	void SetBase(double base);
	void SetExposant(double exposant);
};
#endif
