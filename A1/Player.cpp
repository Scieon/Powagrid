#include "Player.h"
#include <string>
#include <iostream>


using namespace std;

//Static Counter
int Player::number_of_players = 0;


//-- Constructors and Destructors
Player::Player() : elektros(50), numberOfPlants(0) {

	resources[0] = new Coal();
	resources[1] = new Oil();
	resources[2] = new Garbage();
	resources[3] = new Uranium();
	++number_of_players;
}

Player::Player(string color) : elektros(50), numberOfPlants(0) {

	houses.setColor(color);
	resources[0] = new Coal();
	resources[1] = new Oil();
	resources[2] = new Garbage();
	resources[3] = new Uranium();
	++number_of_players;
}
Player::~Player() {
	--number_of_players;
}


//-- Accessor and Mutators


void Player::addResource(string type, int quantity) {
	if (type == "Coal")
		resources[0]->addQuantity(quantity);

	if (type == "Oil")
		resources[1]->addQuantity(quantity);

	if (type == "Garbage")
		resources[2]->addQuantity(quantity);

	if (type == "Uranium")
		resources[3]->addQuantity(quantity);

	else
		cout << "Error in adding resource quantity" << endl;
}

int Player::getElektros() const {
	return elektros;
}


//-- Accessory Methods
void Player::setElektros(int elektros) {
	this->elektros = elektros;
}

void Player::addElektros(int elektros) {
	this->elektros += elektros;
}



//Test functions


void Player::addPlant(Powerplant p1) {

	if (powerplants[0].getBid() == -1) {
		powerplants[0] = p1;
		numberOfPlants++;
	}

	else {
		powerplants[1] = p1;
		numberOfPlants++;
	}
}


void Player::showPlants() {

	if (powerplants[0].getBid() != -1)
		powerplants[0].showPlantInfo();

	if (powerplants[1].getBid() != -1)
		powerplants[1].showPlantInfo();

}
void Player::showInfo() const {

	cout << "-------------------- Player " << number_of_players << ": Details" << "--------------------" << endl;
	cout << "Elektros: " << elektros << endl << "Color: " << houses.getColor() << endl;
	cout << "Number of Houses " << houses.getHouses() << endl;
	cout << "Number of Powerplants: " << numberOfPlants << endl << endl;
	cout << "Coal Quantity: " << resources[0]->getQuantity() << endl;
	cout << "Oil Quantity: " << resources[1]->getQuantity() << endl;
	cout << "Garbage Quantity: " << resources[2]->getQuantity() << endl;
	cout << "Uranium Quantity: " << resources[3]->getQuantity() << endl << endl;


}