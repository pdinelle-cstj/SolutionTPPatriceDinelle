#include "Menus2046390.h"
#include <iostream>
#include <string>

using namespace std;

void afficherMenu1(int menu)
{
	



	if (menu == 1)   // afficher le premier menu
	{
		cout << "Choisissez la forme : " << endl;
		cout << "  1. Rectangle " << endl;
		cout << "  2. Triangle " << endl;
		cout << "  3. Carré " << endl;
		cout << "  4. Losange " << endl;
		cout << "  5. Quiter " << endl;
		
	}


	if (menu == 2)   // afficher le deuxieme menu 
	{
		cout << "Choisissez le remplissage : " << endl;
		cout << "  1. Forme pleine " << endl;
		cout << "  2. forme vide " << endl;
		cout << "  3. Retour au menu précédent " << endl;

	}

}

int validerMenu(int choix, int quitter) // valider les menus 
{
	int rep;
	const int MAX = 5;
	const int MIN = 1;
	const int MAX2 = 3;
	const int MIN2 = 1;
	string clavier;


	if (choix == 1) //pour le menu 1 
	{
		
		
		cout << "Votre choix --> ";
		getline(cin, clavier, '\n');		// getline permet de lire et nettoyer toute la mémoire du clavier

	
		while ((clavier.empty() || ((clavier.front() < '1' || clavier.front() > '5')))) // le menu ne va pas plus au que 5
		{
			cout << "Erreur : Vous devez taper des chiffres qui fait partie des choix " << endl;
			afficherMenu1(1);
			cout << "Votre choix --> ";
			getline(cin, clavier, '\n');
		}
		// transfomer en int
		return stoi(clavier);
	}
	if (choix == 2) // pour le menu 2 
	{


		
		cout << "Votre choix --> ";
		getline(cin, clavier, '\n');		// getline permet de lire et nettoyer toute la mémoire du clavier


		while ((clavier.empty() || ((clavier.front() < '1' || clavier.front() > '3')))) // le menu ne va pas plus au que 3
		{
			cout << "Erreur : Vous devez taper des chiffres qui fait partie des choix " << endl;
			afficherMenu1(2);
			cout << "Votre choix --> ";
			getline(cin, clavier, '\n');
		}
		// transfomer en int
		return stoi(clavier);
		}

	}




	

