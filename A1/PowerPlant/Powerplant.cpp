#include <iostream>
#include <stdlib.h> 
#include "Powerplant.h"

using namespace std;

Powerplant::Powerplant() {
	cout << "Default constructor" << endl;
}

Powerplant::~Powerplant() {

}

Powerplant::Powerplant(int min_bid, string resource_type, int resources_required, int num_cities_powered) {

	this->min_bid = min_bid;
	this->resource_type = resource_type;
	this->resources_required = resources_required;
	this->num_cities_powered = num_cities_powered;
	this->storage = 2 * resources_required;
}

int Powerplant::getBid() {
	return min_bid;
}

void Powerplant::setBid(int bid) {
	min_bid = bid;
}

string Powerplant::getType() {
	return resource_type;
}

int Powerplant::getCitiesPowered() {
	return num_cities_powered;
}

int Powerplant::getResourceReq() {
	return resources_required;
}

int Powerplant::getStorage() {
	return storage;
}



