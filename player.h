
#pragma once

#include <SFML/Graphics.hpp>

class Player
{
private:
	sf::RectangleShape shape;
	sf::Vector2f position;
	sf::Vector2f size;
	sf::Vector2f getVelocity();
	int y;
public:
	Player(int y, int width, int height);
	~Player();
	void draw(sf::RenderWindow& window);
	sf::Vector2f getPosition();
	sf::Vector2f getSize();
};
