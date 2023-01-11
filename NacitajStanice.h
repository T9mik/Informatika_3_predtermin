#pragma once
#include <vector>
#include "NacitajData.h"
#include "Stanica.h"
//trieda na nacitanie cisiel kolaji prislusnych stanic
class NacitajStanice : public NacitajData
{
public:
	NacitajStanice();
	void nacitaj();
	~NacitajStanice();
};

