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

        // https://www.sfml-dev.org/documentation/2.5.0/classsf_1_1CircleShape.php
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

        // https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1RectangleShape.php
        RectangleShape* bouche = new RectangleShape(Vector2f(70,5));
        bouche->setFillColor(Color::Red);
        bouche->setPosition(35,80);

        fenetre.draw(*visage);
        fenetre.draw(*oeilDroit);
        fenetre.draw(*oeilGauche);
        fenetre.draw(*bouche);

        fenetre.display();
    }
    return 0;
}
