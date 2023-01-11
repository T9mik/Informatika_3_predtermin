#include "Stanica.h"

#include <algorithm>
#include <iostream>

Stanica::Stanica(std::string paNazovStanice, int paCiselnyKodStanice)
	:nazovStanice(paNazovStanice), ciselnyKodStanice(paCiselnyKodStanice)
{
}

void Stanica::vypisStanicu()
{
	std::cout << nazovStanice << std::endl << "---------------" << std::endl;
	for (int i : kolaje)
	{
		std::cout << i << std::endl;
	}
}

void Stanica::priradStaniciKod()
{
}

void Stanica::priradStaniciKolaje(std::string kolaj)
{
	kolaje.push_back(stoi(kolaj));
}
//method for sorting kolaje from greater to lower

void Stanica::zoradKolajeStanice()
{

	std::sort(kolaje.begin(), kolaje.end(), std::greater<int>());
}

Stanica::~Stanica()
{
}
