#include "pch.h"
#include "Player.h"
#include "Scene.h"
#include "Swamp.h"
#include "Grasslands.h"
#include "BadLands.h"
#include "Forest.h"
#include "Biome.h"
#include "Creature.h"
#include <vector>
#include <iostream>

Scene::Scene()
{
}

//              GETTER FUNCTIONS 
int Scene::GetNorth() const { return 0; }
int Scene::GetSouth() const { return 0; }
int Scene::GetEast() const { return 0; }
int Scene::GetWest() const { return 0; }
int Scene::GetSceneX() const { return SceneX; }
int Scene::GetSceneY() const { return SceneY; }
int Scene::GetSceneID() const { return SceneID; }

void Scene::SetSceneLocation(int x, int y) { SceneX = x; SceneY = y; }
std::vector<std::unique_ptr <Biome> > XBiomeType;



//Called the first time the player enters a new tile, This Genarates the area you are in, in detail, and spawns objects/npcs
Scene Scene::GenarateScene(int  TileID, int ID)
{

	SceneID = ID;
	switch (TileID)
	{
	case 0:
		XBiomeType.emplace_back(new Swamp());
		//std::cout << "Swamp \n"; 
		break;
	case 1:
		//maybe set the tile type here
		XBiomeType.emplace_back(new GrassLands());
		//std::cout << " GrassLands \n";
		break;
	case 2:
		XBiomeType.emplace_back(new BadLands());
		//std::cout << " BadLands \n";
		break;
	case 3:
		XBiomeType.emplace_back(new Forest());
		//std::cout << " Forest \n";
		break;

	
	}
	std::cout << std::endl;
	return Scene();
}
//Called when the player returns to a previously already seen tile, this explains in detail things youve already seen or have already done
Scene Scene::LoadScene(int id)
{
	XBiomeType[id].get()->PlayBiome();


	//takes an x and y position and loads in the scene at that postition
	return Scene();
}

int Scene::GetSceneID(int xPos, int yPos) const
{
	int counter = 0;
	for (int i = 0; i <= xPos; i++)
	{
		for (int j = 0; j <= yPos; j++)
		{
			counter++;
		}
	}
	return counter;
}

