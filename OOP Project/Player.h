#pragma once

#include "Entity.h"
#include "Platform.h"
#include "Animation.h"

class Player
	: public GameEngine, public Entity
{
private:
	Animation* playerAnimation;

	sf::RectangleShape hitBox;

	Platform platform;

	void initVariables(sf::RenderWindow& window);
public:
	Player(sf::RenderWindow& window);
	~Player();

	const sf::FloatRect& getBounds() const;
	const sf::Vector2f& getPosition() const;
	const sf::Vector2i& getPlayerVelocity();

	void setPlayerPosition(float x, float y);
	void setPlayerVelocityY(float y);
	void setPlayerVelocityX(float x);
	void updateMovement();
	void updateWindowCollision(sf::RenderWindow& window);
	//void updatePlatformCollision();
	void move(const float dir_x, const float dir_y);


	void update(sf::RenderWindow& window);
	void render(sf::RenderTarget* target);
};

