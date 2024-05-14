#include <iostream>
#include "../Header/Rectangle.h"
using namespace std;

/*==================================================================================================*/

Rectangle::Rectangle(float x, float y)
{
	longueur = x;
	largeur = y;
}

/*==================================================================================================*/

Rectangle::~Rectangle()
{

}

/*==================================================================================================*/

float Rectangle::getLongueur()
{
	return longueur;
}

/*==================================================================================================*/

float Rectangle::getLargeur()
{
	return largeur;
}

/*==================================================================================================*/

void Rectangle::setLongueur(float longueur)
{
	this->longueur = longueur;
}

/*==================================================================================================*/

void Rectangle::setLargeur(float largeur)
{
	this->largeur = largeur;
}

/*==================================================================================================*/

void Rectangle::display()
{
	cout << "Rectangle de longueur : " << longueur << " et " << " de largeur : " << largeur << endl;
}

/*==================================================================================================*/

void Rectangle::perimetre()
{
    float perimetre = 2 * (longueur+largeur);
    cout << "le perimetre est: " << perimetre << endl;
} 

/*==================================================================================================*/

void Rectangle::aire()
{
    float aire = longueur * largeur;
    cout << "L'aire de ce rectangle est: " << aire << endl;
}

/*==================================================================================================*/