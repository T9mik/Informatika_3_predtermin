#include "PriradUdaje.h"

#include <iostream>

PriradUdaje::PriradUdaje()
{
	priradKolajeKStanici();
}

void PriradUdaje::priradKolajeKStanici()
{
	NacitanieMienStanic nacitanieMienStanic;
	NacitajStanice nacitajStanice;
	for (int i = 0; i < nacitanieMienStanic.getPocetRiadkov(); i++)
	{
		for (int x = 0; x < nacitajStanice.getPocetRiadkov(); x++)
		{
			if (nacitanieMienStanic.getPrvyUdajInt(i) == nacitajStanice.getPrvyUdajInt(x))
			{
				Stanica stanica(nacitanieMienStanic.getDruhyUdajString(i), nacitanieMienStanic.getPrvyUdajInt(i));
				stanica.priradStaniciKolaje();
				stanice.push_back(stanica);
				stanica.vypisStanicu();
			}
		}
	}
}

PriradUdaje::~PriradUdaje()
{
}