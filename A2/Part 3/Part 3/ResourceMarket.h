#pragma once

#include "ResourceManager.h"
#include "AbstractSubject.h"
#include "Garbage.h"
#include "Uranium.h"
#include "Coal.h"
#include "Oil.h"


//This class is the resource market that holds all four resources that players will buy from
class ResourceMarket : public AbstractSubject {

public:
	ResourceMarket();
	~ResourceMarket();

	int getMarketCost(string resource, int quantity);
	int getMarketQuantity(string resource);

	void updateMarket(string resource, int quantity); //Removes resources purchased by players during phase 3
	void showInfo();

	void attach(ResourceMarketView * obs);
	void detach(ResourceMarketView * obs);
	void notify();

private:
	ResourceManager * market[12];

	//Internal Behaviour Methods that should not be accessed outside of class
	int findEmpty(string resource);
	int findPartial(string resource);

};

