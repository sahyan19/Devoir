#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
	public:
		Rectangle(float x,float y);
		~Rectangle();
		float getLongueur();
		float getLargeur();
		void setLongueur(float longueur);
		void setLargeur(float largeur);
		void display();
		void perimetre();
		void aire();
	protected:
		float longueur, largeur;	
};
#endif
