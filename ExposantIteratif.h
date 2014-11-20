//----------------------------------------------------------------------------//
//  Labo 5 - Liste de Fibonacci    											//
//	Shaun Cooper & Emmanuel Beloin										    //
//	Cr�� le : 19-11-14													    //
//	Derni�re modification : 19-11-14									        //
//	ExposantIteratif.h														//
//	D�clarations de la classe ExposantIteratif								//
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