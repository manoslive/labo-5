#define ExposantIteratif
#ifndef ExposantIteratif
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
public:
	ExposantIteratif(int base, int exposant);
	operator double() const;
};
#endif ExposantIteratif