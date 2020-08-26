#include <iostream>
#include "Generate.h"
#include "SortingAlg.h"

int main()
{

	Generate gen;

	std::vector <int> listalow = gen.MonLowering(10);
	std::vector <int> listaris = gen.MonRising(10);
	std::vector <int> listarand = gen.random(10);
	std::vector <int> listastatic = gen.Static(10);


	quicksortsuper(&listarand.front(), &listarand.back());
	std::cout << std::endl << "funktionen ska ha körts" << std::endl;
	system("PAUSE");

	std::vector <int> listarand2 = gen.random(3);
	quicksortsuper(&listarand2.front(), &listarand2.back());
	std::cout << std::endl << "funktionen ska ha körts" << std::endl;
	system("PAUSE");

	std::vector <int> listarand3 = gen.random(2);
	quicksortsuper(&listarand3.front(), &listarand3.back());
	std::cout << std::endl << "funktionen ska ha körts" << std::endl;
	system("PAUSE");

	std::vector <int> listarand4 = gen.random(1);
	quicksortsuper(&listarand4.front(), &listarand4.back());
	std::cout << std::endl << "funktionen ska ha körts" << std::endl;
	system("PAUSE");

}