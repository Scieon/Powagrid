#include "Coal.h"


Coal::~Coal() {
	cout << "Deleting Coal" << endl;
	cin.get();
	//delete this;
}
Coal::Coal() {

	cost = 25;
}

Coal::Coal(int cost) : cost(cost) {

}

int Coal::getCost() const {
	return cost;
}

void Coal::setCost(int cost) {
	this->cost = cost;
}