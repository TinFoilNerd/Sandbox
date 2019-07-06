#pragma once
class Player
{
public:
	Player();
	void Spawn(int WorldSize);
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
	void Die();
	int GetCurrentLocationX();
	int GetCurrentLocationY();
	void PrintPlayerLocation();
private:
	int Health = 100;
	int XLocation = 0;
	int YLocation = 0;
};