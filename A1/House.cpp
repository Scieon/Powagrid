#include "House.h"


House::House() : color(""), number_of_houses(1)  {

}

House::House(string color) : color(color), number_of_houses(1) {

}

void House::setColor(string color) {
	this->color = color;
}

string House::getColor() const {
	return color;
}

int House::getHouses() const {
	return number_of_houses;
}

//house is the new number of houses to be added to existing number of houses.
void House::setHouses(int house) {
	this->number_of_houses += house; 
}

