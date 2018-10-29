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
using namespace sf;
int main()
{



    RenderWindow fenetre(VideoMode(LARGEUR, HAUTEUR), "SFML !");
    Event evenement;

    while (fenetre.isOpen())
    {
        fenetre.clear();

        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == Event::Closed)
                fenetre.close();
        }

        //fenetre.draw(*visage);
        //fenetre.draw(*oeilDroit);
        //fenetre.draw(*oeilGauche);
        //fenetre.draw(*bouche);

        fenetre.display();

    }

    return 0;
}
