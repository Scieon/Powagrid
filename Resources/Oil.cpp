#include "Oil.h"


Oil::Oil() {
	cost = 50;
}
void Oil::setCost(int cost)  {
	this->cost = cost;
}

int Oil::getCost() const {
	return cost;
}