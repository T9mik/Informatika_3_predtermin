#pragma once
#include "NacitajData.h"

class NacitanieMienStanic : public NacitajData
{
private:

public:
	NacitanieMienStanic();
	void nacitaj();
	~NacitanieMienStanic();
	std::string getMenoStanice();
};

