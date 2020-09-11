/* But :  Programmer un programme qui va nous indiquer si le nombre entier entrer est un nombre à cinq variables, s'il l'est,
		  le programme va l'afficher à la verticale.
*/
// Auteur : Samuel Plouffe
// Date : 2020-09-11


#include <iostream>
void main()
{

	setlocale(LC_ALL, "");		// Pour convertir les accents correctement 

	int nb1;		// déclare variable
	int nb2;


	std::cout << "Veuiller entrer un nombre entier à 5 chiffres : ";
	std::cin >> nb1;										// Utilisateur entre un nombre entier

	std::cout << "Veuiller entrer le nombre 10000 : ";
	std::cin >> nb2;

	if (nb1 > nb2)
	{
		std::cout << " Ce nombre contient plus que 5 chiffres ";
	}
	else
	{
		std::cout << " Ce nombre ne contient pas 5 chiffres ";
	}











} 


// Le plan de test
/*
nb1			nb2				résultat
10001		10000			10001 contient 5 chiffres
5975		10000			5975 ne contient pas 5 chiffres
12345		10000			12345 contient 5 chiffres
150			10000			150 ne contient pas 5 chiffres
*/