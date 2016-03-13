#pragma once
#include <string>
using std::string;

class House {

public:
	House();
	House(string color);
	void setColor(string color);
	string getColor() const;
	int getHouses() const;
	void setHouses(int house);


private:

	int number_of_houses = 1; //Players start with 1 house or 0?
	string color;

};