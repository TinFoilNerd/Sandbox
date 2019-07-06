#pragma once
#include <cstdlib>
#include <time.h>
// Abstract Base class for all the diffrent biomes a scene can consist of
class Biome
{
public:
	virtual void PlayBiome() = 0;
private:
	bool HasBeenHere = false;
	int Index = 0;
};