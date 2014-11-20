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
   ExposantRecursif(int base, int exposant);
   operator double() const;

   int GetBase() const;
   int GetExposant() const;

   void SetBase(int base);
   void SetExposant(int exposant);
};
#endif