#pragma once
#include "Biome.h"
//This class will genarate a specific scene upon Genarating a new world and load in specific scenes based on the players position
class Scene
{
public:
	Scene();

    /*
    To make TileIDs more readable, and so you don't have to use magic numbers in your code,
    you could do something like:

    enum class BiomeType
    {
        Swamp = 0,
        GrassLands = 1,
        BadLands = 2,
        Forest = 3
    }

    and use that instead of ints.
    */
	Scene GenarateScene(int TileID, int ID);

	Scene LoadScene(int ID);
	int GetNorth() const;
	int GetSouth() const;
	int GetEast() const;
	int GetWest() const;

    /*
    I'm not sure where I stand on this issue exactly, because compilers can optimize simple getters and setters,
    but I watched something recently by Casey Muratori where he was complaining about simple getters and setters.
    It's a good practice to use them in case the getters or setters have some side-effects or do some special logic,
    but when they are there just in case the getter/setter code will change in the future, they make writing some
    code more cumbersome and add more boilerplate.

    Casey's argument was to just make things public, and if you find out later that you need getters or setters,
    just make the variable private or rename it, the uses of the variable will turn into compile errors, then
    you can go through and fix the code to use the getters/setters.

    Again, I don't know if I actually agree with that, but I though it was an interesting point of view:

    https://www.youtube.com/watch?v=_xLgr6Ng4qQ
    */
	int GetSceneX() const;
	int GetSceneY() const;
	int GetSceneID() const;
	int GetSceneID(int xPos, int yPos) const;
	
	void SetSceneLocation(int x, int y);
private:
	
	int SceneID = 0;
	int SceneX = 0;
	int SceneY = 0;
	
};