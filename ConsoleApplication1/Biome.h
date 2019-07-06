#pragma once
#include <cstdlib>
#include <time.h>
// Abstract Base class for all the diffrent biomes a scene can consist of
class Biome
{
public:
    // Nice! Whenever you use virtual functions I'd advise adding a virtual destructor.
    // See https://stackoverflow.com/questions/461203/when-to-use-virtual-destructors
    // It's an annoying quirk of C++ that can sometimes bite you if you leave the virtual
    // destructor out.
	virtual void PlayBiome() = 0;
private:
	bool HasBeenHere = false;
	int Index = 0;
};