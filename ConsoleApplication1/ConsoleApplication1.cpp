// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "World.h"
#include "Scene.h"
#include "Player.h"
#include <iostream>
#include <string>

int main()
{ 
	World GameWorld = World();
	Scene CurrentScene = Scene();
	Player XPlayer = Player();
	GameWorld.AskForWorldSize();
	GameWorld.GenarateWorld();
	XPlayer.Spawn(GameWorld.GetWorldSize());
	
	std::string response = "";
	while (response != "quit")
	{
		std::cin >> response;

		if (response == "up")
		{
			XPlayer.MoveUp();
			//XPlayer.PrintPlayerLocation();
			CurrentScene.LoadScene(CurrentScene.GetSceneID(XPlayer.GetCurrentLocationX(), (XPlayer.GetCurrentLocationY())));

		}
		else if (response == "down")
		{
			XPlayer.MoveDown();
			//XPlayer.PrintPlayerLocation();
			CurrentScene.LoadScene(CurrentScene.GetSceneID(XPlayer.GetCurrentLocationX(), (XPlayer.GetCurrentLocationY())));
		
		}
		else if (response == "left")
		{
			XPlayer.MoveLeft();
			//XPlayer.PrintPlayerLocation();
			CurrentScene.LoadScene(CurrentScene.GetSceneID(XPlayer.GetCurrentLocationX(), (XPlayer.GetCurrentLocationY())));
			
		}
		else if (response == "right")
		{
			XPlayer.MoveRight();
			//XPlayer.PrintPlayerLocation();
			CurrentScene.LoadScene(CurrentScene.GetSceneID(XPlayer.GetCurrentLocationX(), (XPlayer.GetCurrentLocationY())));
		

		}
	}
}

/*
  ____________________________________________________________________________IDEAS AND BRAIN STORMING_______________________________________________________________________

  I want this game to be somewhat sandboxy with no real story and you just genarate a world and do whatever the fuck you want. I want to learn from this and improve my coding skills

  some ideas__

  so im thinking now that I have this world generation working good I should start thinking about how my scenes are going to be saved/if they should be genarated as soon as the
  player enters them.. I am thinking on the latter. so I will probably need to make a scene class for each diffrent possible scene
  and genarate various objects/creatures for the player to mess around with, fight (BIG MAYBE), and explore so each time you play something diffrent happens,
  aswell as a coding challenge for me.


			I want this game to use a main set of key phrases aswell as some hidden or funny ones for the player to discover
				KeyPhrase Ideas:
					Run North
					Run South
					Run East
					Run West
					Look North
					Look South
					Look East
					Look West
					Flee
					Attack
					Inspect
					Help
					Talk To (Maybe)
					Enter



				CREATURE IDEAS

				COW
					You can milk it!
					You can Pet It!
					You can feed it!
					you can kill it!
					you can talk to it?


*/