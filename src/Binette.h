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

namespace MondeMagique {

class Binette {

protected:
    CircleShape* visage;
    CircleShape* oeilDroit;
    CircleShape* oeilGauche;
    RectangleShape* bouche;
public:
	Binette();
	virtual ~Binette();
};

} /* namespace MondeMagique */

#endif /* BINETTE_H_ */
