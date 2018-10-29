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
    CircleShape cercle(100.f);
    cercle.setFillColor(Color::Green);
    while (fenetre.isOpen())
    {
        Event evenement;
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == Event::Closed)
                fenetre.close();
        }
        fenetre.clear();
        fenetre.draw(cercle);
        fenetre.display();
    }
    return 0;
}
