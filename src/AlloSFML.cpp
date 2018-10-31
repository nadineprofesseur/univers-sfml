//============================================================================
// Name        : AlloSFML.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#define LARGEUR 800
#define HAUTEUR 600
#include <SFML/Graphics.hpp>
#include "Binette.h"
using namespace sf;
int main()
{
    RenderWindow fenetre(VideoMode(LARGEUR, HAUTEUR), "SFML !");
    Event evenement;
    Binette binette;
    bool binetteActive = false;

    while (fenetre.isOpen())
    {
        fenetre.clear();

        while (fenetre.pollEvent(evenement))
        {
        	char lettre;
            if (evenement.type == Event::Closed)
                fenetre.close();
            if(evenement.type == Event::KeyPressed)
            {
            	switch(evenement.key.code)
            	{
            		case Keyboard::B:
            			binetteActive = true;
            			lettre = 'b';
            		break;
            		case Keyboard::Up:
            		case Keyboard::E:
            			//binette.sauter();
            			lettre = 'e';
            		break;
            		case Keyboard::Right:
            		case Keyboard::F:
            			//binette.deplacer(+1);
            			lettre = 'f';
            		break;
            		case Keyboard::Left:
            		case Keyboard::S:
            			//binette.deplacer(-1);
            			lettre = 's';
            		break;
            		default:
            			break;
            	}
            }
            if(evenement.type == Event::KeyReleased)
            {
            	switch(evenement.key.code)
            	{
            		case Keyboard::B:
            			binetteActive = false;
            		break;
            		default:
            		break;
            	}
            }
        }

        if(binetteActive) binette.afficher(&fenetre);
        fenetre.display();

    }

    return 0;
}
