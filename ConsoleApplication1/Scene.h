#pragma once
#include "Biome.h"
//This class will genarate a specific scene upon Genarating a new world and load in specific scenes based on the players position
class Scene
{
public:
	Scene();
	Scene GenarateScene(int TileID, int ID);
	Scene LoadScene(int ID);
	int GetNorth() const;
	int GetSouth() const;
	int GetEast() const;
	int GetWest() const;
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