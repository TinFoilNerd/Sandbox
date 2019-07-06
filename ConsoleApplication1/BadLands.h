#pragma once
#include "Biome.h"
#include <iostream>

class BadLands : public Biome
{
public:

	void PlayBiome();
private:
	bool HasBeenHere = false;
	int Index = 0;
};