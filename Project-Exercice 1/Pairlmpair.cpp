// But: Programmer un programme qui lit un nombre entier et détermine s'il s'agit d'un nombre pair ou impaire
// Auteur : Samuel Plouffe
// Date : 2020-09-10

#include <iostream>
void main()
{

	setlocale(LC_ALL, "");		// Pour convertir correctement les accents

	int nb1;

	std::cout << "Veuiller entrer un nombre entier :";
	std::cin >> nb1;										// Utilisateur entre un nombre entier

	if ( (nb1 % 2) == 0)									// Opération pour le nb1 pour savoir s'il est pair ou impair 
	{
		std::cout << nb1 << "est un nombre pair";
	}
	else 
	{
		std::cout << nb1 << "est un nombre impair";
	}


}


// Le plan de test
/*
nb1			résultat
10			10 est un nombre pair
33			33 est un nombre impair 
78			78 est un nombre pair
131			131 est un nombre impair
*/

