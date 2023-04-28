#include <SFML/Graphics.hpp>

int main()
{
    // Création de la fenêtre
    sf::RenderWindow window(sf::VideoMode(800, 600), "Ma fenêtre");

    // Création du cercle (balle)
    sf::CircleShape circle(50.f);
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(400.f, 300.f);

    // Boucle principale
    while (window.isOpen())
    {
        // Gestion des événements
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Effacement de la fenêtre
        window.clear(sf::Color::White);

        // Dessin du cercle
        window.draw(circle);

        // Actualisation de la fenêtre
        window.display();
    }

    return 0;
}
