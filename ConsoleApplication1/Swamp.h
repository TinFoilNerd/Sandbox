#pragma once
#include <iostream>
#include "Biome.h"
class Swamp : public Biome
{
public:
	void PlayBiome();
private:
	bool HasBeenHere = false;
	int Index = 0;
};