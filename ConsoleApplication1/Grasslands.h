#pragma once
#include "Biome.h"
class GrassLands : public Biome
{
public:
	void PlayBiome();
	
private:
	bool HasBeenHere = false;
	int Index = 0;

};