#ifndef RESOURCEMARKET_H
#define RESOURCEMARKET_H

#include "ResourceManager.h"
#include "AbstractSubject.h"


//This class is the resource market that holds all four resources that players will buy from
class ResourceMarket : public AbstractSubject {

public:
	ResourceMarket();
	~ResourceMarket();

	int getMarketCost(string resource, int quantity);
	int getMarketQuantity(string resource);

	void updateMarket(string resource, int quantity); //Removes resources purchased by players 
	void showRemaining(); //Show remaining resources in the market
	void showInfo(); //Show current market info
	

private:
	ResourceManager * market[12];

	//Internal Behaviour Methods that should not be accessed outside of class
	int findEmpty(string resource);
	int findPartial(string resource);
	int getTotal(string resource);

};

#endif