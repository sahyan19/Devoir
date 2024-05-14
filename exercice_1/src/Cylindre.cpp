#include <iostream>
#include "../Header/Cercle.h"
#include "../Header/Point.h"
#include "../Header/Cylindre.h"
#define pi 3.14
using namespace std;

/*==================================================================================================*/

Cylindre::Cylindre(Cercle c, float z)
{
	base = c;
	hauteur = z;
}

/*==================================================================================================*/

Cylindre::~Cylindre()
{
	
}

/*==================================================================================================*/

Cercle Cylindre::getBase()
{
	return base;
}

/*==================================================================================================*/

float Cylindre::getHauteur()
{
	return hauteur;
}

/*==================================================================================================*/

void Cylindre::setBase(Cercle base)
{
	this->base = base;
}

/*==================================================================================================*/

void Cylindre::setHauteur(float hauteur)
{
	this->hauteur = hauteur;
}

/*==================================================================================================*/

void Cylindre::display()
{
	cout << "Cylindre de Base : " << endl ;
    base.display();
	cout << "Hauteur: " << hauteur << endl;
}


/*==================================================================================================*/

void Cylindre::aire()
{
    float aire = 2*pi*base.getRayon()*hauteur;
    cout << "L'aire de ce cylindre est: " << aire << endl;
}

/*==================================================================================================*/

void Cylindre::volume()
{
    float volume = pi * base.getRayon() * base.getRayon() * hauteur;
    cout << "Le volume de ce cylindre est: " << volume << endl;
}

/*==================================================================================================*/