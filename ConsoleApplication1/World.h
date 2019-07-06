#pragma once
#include<string>
#include<vector>
#include "Scene.h"
class World
{
	
public:
	World();
	int GetCurrentLocation();
	std::vector <std::vector<int> > GenarateWorld();
	int GetWorldSize() const;
	int AskForWorldSize();
	std::vector <std::vector<int> > GetWorldData() const;
	int GetTileIDAt(int x, int y) const;


private:
	int WorldSize = 0;
	std::vector <std::vector<int> > WorldY;
	std::vector <std::vector <Scene> > XWorldScenes;
};


//TODO Make a Main Menu
//TODO Make sure player input is correct