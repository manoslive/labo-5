//----------------------------------------------------------------------------//
//  Labo 5 - Liste de Fibonacci    											//
//	Shaun Cooper & Emmanuel Beloin										    //
//	Créé le : 19-11-14													    //
//	Dernière modification : 19-11-14									        //
//	ExposantIteratif.h														//
//	Déclarations de la classe ExposantIteratif								//
//----------------------------------------------------------------------------//

class ExposantIteratif
{
	int base_;
	int exposant_;
public:
	ExposantIteratif(int base, int exposant);
	operator double() const;

	int GetBase() const;
	int GetExposant() const;

	void SetBase(int base);
	void SetExposant(int exposant);
};