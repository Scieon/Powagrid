#include "ResourceMarket.h"
#include "ResourceManager.h"
#include "AbstractSubject.h"
#include <iostream>
#include <string>


using namespace std;

//---------------------------------OBSERVERS-------------------------------------------------------//


void ResourceMarket::attach(ResourceMarketView  * observer) {

	observers->push_back(observer);

}

void ResourceMarket::detach(ResourceMarketView * observer) {

	observers->remove(observer);
}

void ResourceMarket::notify() {

	list<ResourceMarketView *>::iterator i = observers->begin();

	for (; i != observers->end(); ++i) {
		(*i)->update();
	}
}



//---------------------------------OBSERVERS-------------------------------------------------------//




//Resource Market intializes game resources according to rules
ResourceMarket::ResourceMarket(){
	market[0] = new ResourceManager();
	market[0]->edit("Coal", 3, 1); //edit(type,quantity,cost)
	market[0]->edit("Oil", 0, 1);
	market[0]->edit("Garbage", 0, 1);
	market[0]->edit("Uranium", 0, 1);


	market[1] = new ResourceManager();
	market[1]->edit("Coal", 3, 2);
	market[1]->edit("Oil", 0, 2);
	market[1]->edit("Garbage", 0, 2);
	market[1]->edit("Uranium", 0, 2);

	market[2] = new ResourceManager();
	market[2]->edit("Coal", 3, 3);
	market[2]->edit("Oil", 3, 3);
	market[2]->edit("Garbage", 0, 3);
	market[2]->edit("Uranium", 0, 3);

	market[3] = new ResourceManager();
	market[3]->edit("Coal", 3, 4);
	market[3]->edit("Oil", 3, 4);
	market[3]->edit("Garbage", 0, 4);
	market[3]->edit("Uranium", 0, 4);


	market[4] = new ResourceManager();
	market[4]->edit("Coal", 3, 5);
	market[4]->edit("Oil", 3, 5);
	market[4]->edit("Garbage", 0, 5);
	market[4]->edit("Uranium", 0, 5);

	market[5] = new ResourceManager();
	market[5]->edit("Coal", 3, 6);
	market[5]->edit("Oil", 3, 6);
	market[5]->edit("Garbage", 0, 6);
	market[5]->edit("Uranium", 0, 6);


	market[6] = new ResourceManager();
	market[6]->edit("Coal", 3, 7);
	market[6]->edit("Oil", 3, 7);
	market[6]->edit("Garbage", 3, 7);
	market[6]->edit("Uranium", 0, 7);


	market[7] = new ResourceManager();
	market[7]->edit("Coal", 3, 8);
	market[7]->edit("Oil", 3, 8);
	market[7]->edit("Garbage", 3, 8);
	market[7]->edit("Uranium", 0, 8);

	//Just Uranium from here on
	market[8] = new ResourceManager();
	market[8]->edit("Uranium", 0, 10);

	market[9] = new ResourceManager();
	market[9]->edit("Uranium", 0, 12);

	market[10] = new ResourceManager();
	market[10]->edit("Uranium", 1, 14);

	market[11] = new ResourceManager();
	market[11]->edit("Uranium", 1, 16);

}

//Destructor
ResourceMarket::~ResourceMarket() {

}


//Returns current cost of an valid quantity of a resource
int ResourceMarket::getMarketCost(string resource, int quantity) {

	if (quantity > this->getMarketQuantity(resource)) {
		cout << "The market does not have " << quantity << " units of " << resource << "!" << endl;
		return -1;
	}

	//The following are helpful counters for the functionality of the method
	int index = 0;
	int index1 = findPartial(resource); //-1 is everything is full or not empty
	int index2 = findEmpty(resource); //-1 if nothing is empty
	int counter = 0;
	bool insideIndex = true;

	//The cost of the resource
	int cost = 0;

	//The following two if statements allow us to start at the proper resource slot
	if (index1 != -1)
		index = index1;

	else if (index2 != -1)
		index = index2;

	//Looping through market to find cost the desired quantity
	//We require a rather convoluted setup because we do not want to make actual changes to the resource market
	while (quantity != 0) {
		insideIndex = true;
		int amountAtIndex = market[index + counter]->getResourceQuantity(resource);

		while (insideIndex) {

			if (amountAtIndex != 0) {
				cost += market[index + counter]->getResourceCost(resource); //Computing cost of 1 unit at that index
				quantity -= 1; //Getting the cost of 1 resource at a time
				amountAtIndex--;

				if (quantity == 0)
					return cost;
			}
			else {
				counter++; //Move to next slot
				insideIndex = false; //No longer inside current slot
			}
		} //End of inner while

	}//End of while
	return cost;

}

//Removes resources purchased by players during phase 3
void ResourceMarket::updateMarket(string resource, int quantity) {

	for (int i = 0; i <= 11; i++) {

		while (market[i]->getResourceQuantity(resource) != 0) {
			market[i]->removeOneUnit(resource);
			quantity--;
			if (quantity == 0)
				break;
		}
		if (quantity == 0)
			break;
	}

}


//Return total quantity of resource in market
int ResourceMarket::getMarketQuantity(string resource) {

	int amount_in_market = 0;

	for (int i = 0; i <= 11; i++) {
		amount_in_market += market[i]->getResourceQuantity(resource);
	}
	return amount_in_market;
}



//Return -1 if no empty cells
int ResourceMarket::findEmpty(string resource) {

	int i = 11;
	if (resource == "Oil" || resource == "Coal" || resource == "Garbage")
		i = 7;

	for (i; i >= 0; i--) {

		//If index has empty "Resource" 
		if (market[i]->getResourceQuantity(resource) == 0) {
			return i;
		}
	}

	return -1;
}

//Should not use this function for Uranium
//Returns index with partial amount of resources
int ResourceMarket::findPartial(string resource) {

	if (resource == "Uranium")
		return findEmpty("Uranium");

	for (int i = 7; i >= 0; i--) {

		//If index is not full
		if (market[i]->getResourceQuantity(resource) == 1 || market[i]->getResourceQuantity(resource) == 2) {
			return i;
		}
	}

	return -1;
}



void ResourceMarket::showInfo() {

	for (int i = 0; i <= 11; i++) {

		cout << "Slot[" << i << "]: " << "Coal, Oil, Garbage, Uranium" << endl << "Quantity: " <<
			market[i]->getResourceQuantity("Coal") << ",  " <<
			market[i]->getResourceQuantity("Oil") << ",  " <<
			market[i]->getResourceQuantity("Garbage") << ",  " <<
			market[i]->getResourceQuantity("Uranium") << "  " << endl << "Price: " << market[i]->getResourceCost("Uranium") << endl << endl;
	}

}

