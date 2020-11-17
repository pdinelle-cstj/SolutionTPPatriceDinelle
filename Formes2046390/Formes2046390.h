// But : 
// Auteur : Patrice Dinelle
// Date : 2020-10-30

#pragma once

//La liste des fonctions qui permettent de dessiner les formes

//traiterForme(); //: Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent
//la phrase de pr�sentation de la forme avec les bonnes dimensions et finalement
//appellent la fonction dessinant la forme.Il y aura donc 4 versions de cette
//fonction : 
int traiterRectangle(int remp);
int traiterCarre(int remp);
int traiterTriangle(int remp);
int traiterLosange(int remp);



void dessinerRectangle(int hauteur,int base,int remp); //: Fonction qui dessine un rectangle ou un carr� dont la hauteur, la largeur et le
//mode de remplissage sont pass�s en param�tre.

void dessinerTriangle1(int hauteur,int base,int remp); //: Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode
//de remplissage sont pass�s en param�tre.
void dessinerTriangle2(int hauteur,int base,int ramp); //: Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode
//de remplissage sont pass�s en param�tre.
void dessinerTriangle3(int hauteur, int base,int remp); //: Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode
//de remplissage sont pass�s en param�tre.
void dessinerTriangle4(int hauteur, int base,int remp); //: Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode
//de remplissage sont pass�s en param�tre.

void dessinerLosange(int hauteur,int remp); //: Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont
//pass�s en param�tre.


int genererNombreAleatoire(); //: Fonction qui retourne un nombre al�atoire compris entre min et max pass�s en
//param�tre.