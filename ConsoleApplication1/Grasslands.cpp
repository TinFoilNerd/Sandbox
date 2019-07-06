#include "pch.h"
#include <iostream>
#include <ctime>
#include "Grasslands.h"

void GrassLands::PlayBiome()
{
	if (HasBeenHere == false)
	{
		std::srand(std::time(nullptr));
		Index = rand() % 5;
		switch (Index)
		{
		case 0:
			std::cout << "You arrive in a dark gloomy forest filled with dead, rotting trees. This place makes your skin crawl. \n";

			break;
		case 1:
			std::cout << "You arrive in very hot, Dead plains, There is not much life here. \n";

			break;
		case 2:
			std::cout << "You arrive in a jungle of blue grass, heavy amounts of purple thorn plants and strange flora surround you \n";

			break;
		case 3:
			std::cout << "You arrive in dark plains, the stench of death is very strong here \n";
			break;
		case 4:
			std::cout << "You arrive in a dark gloomy forest. \n";
			break;

		}
		HasBeenHere = true;
	}

	else
		switch (Index)
		{
		case 0:
			std::cout << "You return to the dark gloomy forest filled with dead, rotting trees. This place still makes your skin crawl. \n";
			break;
		case 1:
			std::cout << "You return to the very hot, Dead plains, There is not much life here. \n";
			break;
		case 2:
			std::cout << "You return to the jungle of blue grass, and heavy amounts of purple thorn plants and strange flora. \n";
			break;
		case 3:
			std::cout << "You Return to the dark plains, the stench of death is very strong here \n";
			break;
		case 4:
			std::cout << "You Return to the dark gloomy forest. \n";
			break;

		}
}
