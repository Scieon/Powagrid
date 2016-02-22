#pragma once
#include "Resource.h"


class Garbage : public Resource {

public:
    Garbage();
	void setCost(int cost);
	int getCost() const;

private:
	int cost;


};

