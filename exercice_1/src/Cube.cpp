#include <iostream>
#include "../Header/Cube.h"
using namespace std;

/*==================================================================================================*/

Cube::Cube(float x)
{
	arrete = x;
}

/*==================================================================================================*/

Cube::~Cube()
{

}

/*==================================================================================================*/

float Cube::getArrete()
{
	return arrete;
}

/*==================================================================================================*/

void Cube::setArrete(float arrete)
{
	this->arrete = arrete;
}

/*==================================================================================================*/

void Cube::display()
{
	cout << "Cube de: " << "Arrete = " << arrete << endl;
}

/*==================================================================================================*/

void Cube::aire()
{
    float aire = arrete*arrete;
    cout << "L'aire de ce cube est: " << aire << endl;
}

/*==================================================================================================*/

void Cube::volume()
{
    float volume = arrete*arrete*arrete;
    cout << "Le volume de ce cube est: " << volume << endl;
}

/*==================================================================================================*/
	