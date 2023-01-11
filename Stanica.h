#pragma once
#include <string>
#include <vector>

class Stanica
{
private:
	std::string nazovStanice;
	int ciselnyKodStanice;
	std::vector<int> kolaje;
public:
	Stanica(std::string nazovStanice, int ciselnyKodStanice);
	void vypisStanicu();
	void priradStaniciKod();
	void priradStaniciKolaje(std::string kolaj);
	~Stanica();
};

