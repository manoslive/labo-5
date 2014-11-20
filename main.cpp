//----------------------------------------------------------------------------//
// Labo 5 - Liste de Fibonacci                                             //
//	Shaun Cooper & Emmanuel Beloin                                          //
//	Cr�� le : 19-11-14										                //
//	Derni�re modification : 19-11-14                                        //
//	Main.cpp                                                                //
//	Programme qui permet qui implante de fa�on it�rative et r�cursive		//
// l'�valuation pour n de la suite de Fibonacci							//
//----------------------------------------------------------------------------//

long CalculerFibonacciIteratif(int n)
{
	int reproducteurs = 0;
	int anciens = 1;
	int totale;
	if (n >= 3)
	{
		for (int i = 3; i <= n; i++)
		{
			totale = reproducteurs + anciens;
			anciens = reproducteurs;
			reproducteurs = totale;
		}
	}
	return reproducteurs;
}

int main()
{
	cout << CalculerFibonacciIteratif(6) << endl;
}
