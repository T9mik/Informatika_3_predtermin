#include "NacitajData.h"

#include <iostream>
using namespace std;
NacitajData::NacitajData()
{
}

NacitajData::NacitajData(const char* nazovSuboru)
{
	subor.open(nazovSuboru);
	Nacitaj();
}

NacitajData::~NacitajData()
{
	//TODO: podla dokumentacie má std::map svoj defaultny destruktor
	subor.close();
	/*
	for (std::map<std::string, std::string>::iterator it = data.begin(); it != data.end(); ++it)
	{
		delete& it->first;
	}*/
	
}

void NacitajData::Nacitaj()
{
	std::string prvyUdaj;
	std::string druhyUdaj;
	if (!subor.is_open() || !subor.good())
	{
		cout << "Subor sa nepodarilo otvorit" << endl;
	}
	else
	{
		if (!subor.eof())
		{
			while (subor >> prvyUdaj >> druhyUdaj)
			{
				data.insert(pair<string, string>(prvyUdaj, druhyUdaj));
				cout << prvyUdaj << " " << druhyUdaj << endl;
				pocetRiadkov++;
			}
		}
		subor.close();
	}
}

int NacitajData::getPocetRiadkov()
{
	return pocetRiadkov;
}

int NacitajData::getPrvyUdajInt(int cisloRiadku)
{
	for (auto i : data)
	{
		if (i.first == std::to_string(cisloRiadku))
		{
			return cisloRiadku;
		}
	}
	return 0;
}

std::string NacitajData::getDruhyUdajString(int cisloRiadku)
{
	for (auto i : data)
	{
		if (i.second == std::to_string(cisloRiadku))
		{
			return i.second;
		}
	}
	return "";
}


