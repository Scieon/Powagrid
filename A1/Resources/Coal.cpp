#include "Coal.h"

Coal::Coal() {

}

Coal::Coal(int cost) : cost(cost) {

}

int Coal::getCost() const {
	return cost;
}

void Coal::setCost(int cost) {
	this->cost = cost;
}