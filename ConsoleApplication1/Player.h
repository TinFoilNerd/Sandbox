#pragma once
class Player
{
public:
	Player();

    /*
    To make the parameters of this function less resistant to change if
    the implementation of the World class changes (say you allow rectangular worlds
    instead of square worlds), you could have this function take in the world as an
    argument:

    void Spawn(const World& world);

    That way you don't have to do a bunch of refactoring if the World class changes.
    */
	void Spawn(int WorldSize);

    /*
    One thing you could do here to have fewer functions is something like:

    void Move(int dx, int dy);

    Or, if you want to limit movement to one step at a time, maybe:

    enum class Direction
    {
        Up,
        Down,
        Left,
        Right
    }
    void Move(Direction direction);

    The Move up/down/left/right functions are fine though!
    */
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
	
    void Die();

    /*
    These functions are also fine, but it could make using the Player class a bit
    easier to have something like:

    ```
    class Vector2i
    {
    public:
        int x, y;
    }

    Vector2i GetCurrentLocation() const;
    */
	int GetCurrentLocationX();
	int GetCurrentLocationY();
	
    void PrintPlayerLocation();
private:
	int Health = 100;
	int XLocation = 0;
	int YLocation = 0;
};