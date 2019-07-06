#include "pch.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Player::Player()
{
}

//Gets the World size and spawns the player at a random location inside the world
void Player::Spawn(int WorldSize)
{
	std::srand(std::time(nullptr));
	XLocation = std::rand() % WorldSize;
	YLocation = std::rand() % WorldSize;
	std::cout << "Your spawn position is " << XLocation << "," << YLocation << "\n";
}

void Player::MoveUp()
{
	YLocation++;
}

void Player::MoveDown()
{
	YLocation--;
}

void Player::MoveLeft()
{
	XLocation--;
}

void Player::MoveRight()
{
	XLocation++;
}

void Player::Die()
{
}

int Player::GetCurrentLocationX()
{
	
	return XLocation;
	
}



int Player::GetCurrentLocationY()
{
	return YLocation;
}

void Player::PrintPlayerLocation()
{
	std::cout << "Your new position is " << XLocation << "," << YLocation << "\n";
}
