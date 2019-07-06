#include "pch.h"
#include "Cow.h"

Cow::Cow(std::string name, int XPos, int YPos)
{
	Name = name;
	XPosition = XPos;
	YPosition = YPos;
}

void Cow::Spawn()
{
}

void Cow::Die()
{
}

void Cow::Flee()
{
}

void Cow::Attack()
{
}

int Cow::GetXPosition() const
{
	return XPosition;
}

int Cow::GetYPosition() const
{
	return YPosition;
}
