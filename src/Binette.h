/*
 * Binette.h
 *
 *  Created on: 29 oct. 2018
 *      Author: stamandnadine
 */

#ifndef BINETTE_H_
#define BINETTE_H_
#include <SFML/Graphics.hpp>
using namespace sf;

class Binette {

protected:
    CircleShape* visage;
    CircleShape* oeilDroit;
    CircleShape* oeilGauche;
    RectangleShape* bouche;
    float rayon = 10;

    // Variables temporaires pour optimisation
	float hauteurFinale; // variable utilisée par sauter() dans la boucle
	float tailleDuRebond; // variable utilisée par sauter() dans la boucle

public:
	Binette();
	virtual ~Binette();
	void afficher(RenderWindow*);
	inline void sauter(float hauteurPlafond)
	{
		hauteurFinale = hauteurPlafond - 2*this->rayon;
		tailleDuRebond = hauteurFinale / 3;
		// action
	}
};

#endif /* BINETTE_H_ */
