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
    float rayon = 50.0f;
    float positionX = 100.0f;
    float positionY = 100.0f;

    // https://www.sfml-dev.org/documentation/2.5.0/classsf_1_1CircleShape.php
    CircleShape* visage = new CircleShape(rayon);
    (*visage).setFillColor(Color::Yellow);
    visage->setFillColor(Color::Yellow);
    visage->setPosition(0 - rayon + positionX,0 - rayon + positionY);
    CircleShape* oeilDroit = new CircleShape(10.0f);
    oeilDroit->setFillColor(Color::Green);
    oeilDroit->setPosition(60 - rayon + positionX,20 - rayon + positionY);
    CircleShape* oeilGauche = new CircleShape(10.0f);
    oeilGauche->setFillColor(Color::Green);
    oeilGauche->setPosition(20 - rayon + positionX,20 - rayon + positionY);

    // https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1RectangleShape.php
    RectangleShape* bouche = new RectangleShape(Vector2f(70,5));
    bouche->setFillColor(Color::Red);
    bouche->setPosition(15 - rayon + positionX,60 - rayon + positionY);

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

        fenetre.draw(*visage);
        fenetre.draw(*oeilDroit);
        fenetre.draw(*oeilGauche);
        fenetre.draw(*bouche);

        fenetre.display();

    }

    delete visage; delete oeilDroit; delete oeilGauche; delete bouche;
    return 0;
}
