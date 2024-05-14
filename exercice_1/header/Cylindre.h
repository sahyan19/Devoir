#ifndef CYLINDRE_H
#define CYLINDRE_H
#include "./Point.h"
#include "./Cercle.h"
class Cylindre{
	public:
		Cylindre(Cercle c, float z);
		~Cylindre();
		Cercle getBase();
		float getHauteur();
		void setBase(Cercle base);
		void setHauteur(float hauteur);
		void display();
		void volume();
		void aire();
	protected:
		Cercle base;
		float hauteur;
};
#endif
