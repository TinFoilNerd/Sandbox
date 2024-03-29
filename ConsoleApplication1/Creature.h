#pragma once
#include <string>
//this is the Base, Abstract class for all creatures found in game
class Creature
{

public:
	virtual void Spawn() = 0;
	virtual void Die() = 0;
	virtual void Flee() = 0;
	virtual void Attack() = 0;
	virtual int GetXPosition() const = 0;
	virtual int GetYPosition() const = 0;
private:
    // You could make this protected and get rid of the duplicated variables in Cow.
    // Right now Cow will have two sets of these variables, but the ones
    // declared here won't be used. Instead, the ones declared in Cow will be used.
	std::string Name = "";
	int Health = 0;
	bool Hostile = false;
	int XPosition;
	int YPosition;
};