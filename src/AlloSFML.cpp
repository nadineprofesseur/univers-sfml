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
            if (evenement.type == Event::Closed)
                fenetre.close();
            if(evenement.type == Event::KeyPressed)
            {
            	switch(evenement.key.code)
            	{
            		case Keyboard::B:
            			binetteActive = true;
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
            	}
            }
        }

        if(binetteActive) binette.afficher(&fenetre);
        fenetre.display();

    }

    return 0;
}
