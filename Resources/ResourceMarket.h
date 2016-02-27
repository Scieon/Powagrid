
#pragma once
#include "Coal.h"
#include "Oil.h"
#include "Garbage.h"
#include "Uranium.h"

class ResourceMarket {

public:
	ResourceMarket();
	~ResourceMarket();
	void showInfo();

private:
	Coal coal;
	Oil oil;
	Garbage garbage;
	Uranium uranium;

};

