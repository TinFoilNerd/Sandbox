#pragma once
#include "Creature.h"
class Cow : public Creature
{
public:
	Cow(std::string name,int XPos,int YPos);
	void Spawn();
	void Die();
	void Flee();
	void Attack();
	int GetXPosition() const;
	int GetYPosition() const;
private:
	std::string Name = "";
	int Health = 50;
	bool Hostile = false;
	int XPosition;
	int YPosition;
};