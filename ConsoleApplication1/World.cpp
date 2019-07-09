#include "pch.h"
#include "World.h"
#include "Scene.h"
#include <String>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using FString = std::string;


//A 2D Vector used as a multidemensional array to determine the tile type of the genarated world

World::World()
{
	
}

int World::GetCurrentLocation()
{
	return 0;
}
//Creates a 2D Array with the Given World Size of the type Integer with randomly assigned values in each "Coordinate"
 std::vector <std::vector<int> > World::GenarateWorld()
{
    // Nice to see use of nullptr!
	std::srand(std::time(nullptr));
	std::vector <std::vector<int> > WorldX;

    // Since GenarateWorld is a member function, we *could* bypass the getter and use WorldSize.
    // Not a big deal though.
	int Size = GetWorldSize();

	XWorldScenes.resize(Size, std::vector<Scene>(Size));
	WorldX.resize(Size, std::vector<int>(Size));
	int SceneID = 0;
	for (int i = 0; i < WorldX.size(); i++) 
	{
		for (int j = 0; j < WorldX[i].size(); j++)
		{
			//Depending on what Random number is generated decides what tile will be at that specific spot
			WorldX[i][j] = std::rand() % 4;
			XWorldScenes[i][j].SetSceneLocation(i, j);
			XWorldScenes[i][j].GenarateScene(WorldX[i][j], SceneID);
			SceneID++;
			std::cout << "X," << XWorldScenes[i][j].GetSceneX() << "Y," << XWorldScenes[i][j].GetSceneY() << "\n";
		}
			
	}
	
    /*
    This will assign WorldY a copy of WorldX. If you want to avoid the copy and directly
    *move* the contents of WorldX into WorldY, you can do this:

    WorldY = std::move(WorldX);

    Yet another quirk of C++!
    */
	WorldY = WorldX;
	return WorldY;
}

 int World::GetWorldSize() const
 {
	 return WorldSize;
 }

 int World::AskForWorldSize()
 {
	 int Response = 0;

	 //Take input from player Determining the worldsize to generate
	 std::cout << "Please type in a world size to generate.\n";
	 std::cin >> Response;
	 WorldSize = Response;


	
	 return WorldSize;
 }

 // I feel like printing and getting the data should be two separate functions.
 std::vector <std::vector<int> > World::GetWorldData() const
 {
	 for (int i = 0; i < WorldY.size(); i++)
	 {
		 for (int j = 0; j < WorldY[i].size(); j++)
		 {
			 std::cout << WorldY[i][j];
		 }
	 }
	 return WorldY;
 }

 int World::GetTileIDAt(int x, int y) const
 {
	 return WorldY[x][y];
 }
