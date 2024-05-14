#ifndef CARRE_H
#define CARRE_H

class Carre{
	public:
		Carre(float x=0);
		~Carre();
		float getCote();
		void setCote(float cote);
		void display();
		void perimetre();
		void aire();
	protected:
		float cote;	
};
#endif