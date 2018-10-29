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
    while (fenetre.isOpen())
    {
        fenetre.clear();

        Event evenement;
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == Event::Closed)
                fenetre.close();
        }

        CircleShape* visage = new CircleShape(50.0f);
        (*visage).setFillColor(Color::Yellow);
        visage->setFillColor(Color::Yellow);
        visage->setPosition(20,20);
        CircleShape* oeilDroit = new CircleShape(10.0f);
        oeilDroit->setFillColor(Color::Green);
        oeilDroit->setPosition(80,40);
        CircleShape* oeilGauche = new CircleShape(10.0f);
        oeilGauche->setFillColor(Color::Green);
        oeilGauche->setPosition(40,40);

        fenetre.draw(*visage);
        fenetre.draw(*oeilDroit);
        fenetre.draw(*oeilGauche);
        fenetre.display();
    }
    return 0;
}
