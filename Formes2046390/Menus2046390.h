// But : 
// Auteur : Patrice Dinelle
// Date : 2020-10-30

#pragma once

//La liste des prototypes des fonctions permettant d'afficher et valider les choix des menus

void afficherMenu1(int menu); //: Fonction qui affiche le menu 1
int validerMenu(int choix, int quitter); //: Fonction qui lit le choix de l’utilisateur et vérifie que le choix est bien parmi les
//choix offerts dans le menu, informations passées en paramètre.Cette fonction
//retourne le choix validé.L’utilisateur peut taper n’importe quoi au clavier, le
//programme ne part pas en boucle infinie.
