#pragma once
#include <fstream>
#include <map>
#include <vector>
#include <string>

class NacitajData
{
	std::ifstream subor;
	std::map<std::string, std::string> data;
	int pocetRiadkov = 0;
public:
	NacitajData();
	NacitajData(const char* nazovSuboru);
	~NacitajData();
	void Nacitaj();
	int getPocetRiadkov();
	int getPrvyUdajInt(int cisloRiadku);
	std::string getDruhyUdajString(int cisloRiadku);
};

