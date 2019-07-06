#include "pch.h"
#include "Swamp.h"
#include <ctime>


void Swamp::PlayBiome()
{
	if (HasBeenHere == false)
	{
		std::srand(std::time(nullptr));
		Index = rand() % 5;
		switch (Index)
		{
		case 0:
			std::cout << "You're ankle deep in water, surrounded by trees and vines. it smells like shit";

			break;
		case 1:
			std::cout << "You arrive in a very swampy area filled with various plants and vegitation." << "\n" << "you hear lots of insects flying all around you, you hate it here";

			break;
		case 2:
			std::cout << "You're knee deep in water, you cant even see your feet or the ground, you are surrounded by vegitation \n";

			break;
		case 3:
			std::cout << "You arrive in what seems to be very tropical, very wet land, surrounded by very dense vegitation \n";
			break;
		case 4:
			std::cout << "You arrive at a rather large creek with slowly flowing water in front of you, while surrounded by trees behind you \n";
			break;

		}
		HasBeenHere = true;
	}

	else
		switch (Index)
		{
		case 0:
			std::cout << "You return to the ankle deep water in the swamp \n";
			break;
		case 1:
			std::cout << "You return to the swamp, you know this because you are being eaten alive by mosquitos \n";
			break;
		case 2:
			std::cout << "You return to the swamp, knee deep in the water again. \n";
			break;
		case 3:
			std::cout << "You Return to the Tropical, wet land. \n";
			break;
		case 4:
			std::cout << "You Return to the Creek. \n";
			break;

		}
}
