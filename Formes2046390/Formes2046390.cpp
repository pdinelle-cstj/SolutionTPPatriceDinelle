#include "Formes2046390.h"
#include <iostream>

using namespace std;

int traiterRectangle(int remp)  // permet d'avoir les informations pour le rectangle
{
    int hauteur;
    int base;

    cout << endl;
    cout << "Entrez la hauteur du rectangle : ";
    cin >> hauteur;
    cin.ignore(1, '\n');
    cout << "Entrez la largeur du rectangle : ";
    cin >> base;
    cin.ignore(1, '\n');

    dessinerRectangle(hauteur, base, remp);

    return 0;
}

int traiterCarre(int remp)  // permet d'avoir les informations pour le carré
{
    int cote;

    cout << endl;
    cout << "Entrez le côté du caré : ";
    cin >> cote;
    cin.ignore(1, '\n');

    dessinerRectangle(cote, cote, remp);

    return 0;
}

int traiterTriangle(int remp)  // permet d'avoir les informations pour le triangle
{
    int hauteur;
    int base;
    int triangle;

    cout << endl;
    cout << "Entrez la hauteur du rectangle : ";
    cin >> hauteur;
    cin.ignore(1, '\n');
    cout << "Entrez la largeur du rectangle : ";
    cin >> base;
    cin.ignore(1, '\n');

    triangle = genererNombreAleatoire();
    if (triangle == 1)
    {
        cout << "1" << endl;
        dessinerTriangle1;
    }
    if (triangle == 2)
    {
        cout << "2" << endl;
        dessinerTriangle2;
    }
    if (triangle == 3)
    {
        cout << "3" << endl;
        dessinerTriangle3;
    }
    if (triangle == 4)
    {
        cout << "4" << endl;
        dessinerTriangle4;
    }
    
    //////////

    return 0;
}

int traiterLosange(int remp) // permet d'avoir les informations pour le losange
{
    int hauteur;

    cout << endl;
    cout << "Entrez le côté du caré : ";
    cin >> hauteur;
    cin.ignore(1, '\n');

    dessinerLosange(hauteur, remp);


    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void dessinerRectangle(int hauteur, int base, int remp) // permet d'afficher le rectangle ou le carré 
{
    char esp = ' ';

    if (remp == 1)
    {
        esp = '#';
    }
    cout << endl;
    cout << "Rectangle ou Carré de : "<< hauteur  << " en hauteur et " << base << " en base"<< endl;
    cout << endl;

    // j'ai été incapable de le faire avec juste 2 boucle

}

void dessinerTriangle1(int hauteur, int base, int remp) // permet d'afficher le triangle 1
{
    char esp = ' ';

    if (remp == 1)
    {
        esp = '#';
    }
    cout << endl;
    cout << "Triangle 1 de : " << hauteur << " en hauteur et " << base << " en base" << endl;
    cout << endl;

    // j'ai été incapable de le faire avec juste 2 boucle

}

void dessinerTriangle2(int hauteur, int base, int remp) // permet d'afficher le triangle 2
{
    char esp = ' ';

    if (remp == 1)
    {
        esp = '#';
    }
    cout << endl;
    cout << "Triangle 2 de : " << hauteur << " en hauteur et " << base << " en base" << endl;
    cout << endl;

    // j'ai été incapable de le faire avec juste 2 boucle

}

void dessinerTriangle3(int hauteur, int base, int remp) // permet d'afficher le triangle 3
{
    char esp = ' ';

    if (remp == 1)
    {
        esp = '#';
    }
    cout << endl;
    cout << "Triangle 3 de : " << hauteur << " en hauteur et " << base << " en base" << endl;
    cout << endl;

    // j'ai été incapable de le faire avec juste 2 boucle

}

void dessinerTriangle4(int hauteur, int base, int remp) // permet d'afficher le triangle 4
{
    char esp = ' ';

    if (remp == 1)
    {
        esp = '#';
    }
    cout << endl;
    cout << "Triangle 4 de : " << hauteur << " en hauteur et " << base << " en base" << endl;
    cout << endl;

    // j'ai été incapable de le faire avec juste 2 boucle

}

void dessinerLosange(int hauteur, int remp) // permet d'afficher le losange
{
    char esp = ' ';

    if (remp == 1)
    {
        esp = '#';
    }
    cout << endl;
    cout << "Losange de : " << hauteur << " en hauteur " << endl;
    cout << endl;

    // j'ai été incapable de le faire avec juste 2 boucle

}

int genererNombreAleatoire() // pour avoir un nombre aléatoire entre 1 à 4 pour les triangles
{
    return rand() % 4 + 1;;
}
