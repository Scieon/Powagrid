#include "Player.h"
#include <string>
#include <iostream>
#include "Resource.h"
#include "ResourceManager.h"
using namespace std;

//Static Counter
int Player::number_of_players = 0;


//-- Constructors and Destructors
Player::Player() : elektros(50){
	
	//coal.setCost(50);

	resources[0] = new Coal();
	resources[1] = new Oil();
	resources[2] = new Garbage();
	resources[3] = new Uranium();
	++number_of_players;
}

Player::Player(string color) : elektros(50), color(color) {
	//coal.setCost(5);

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
void Player::showInfo() const {

	cout<< "Number of players: " << number_of_players << endl << "Elektros: " << elektros << endl << "Color: " << color << endl 
		<< "Coal Cost: " << resources[0]->getCost() << endl
		<< "Oil Cost: " << resources[1]->getCost() << endl
		<< "Garbage Cost: " << resources[2]->getCost() << endl
		<< "Uranium Cost: " << resources[3] ->getCost() << endl << endl;//coal.getCost() << endl;
}

int Player::getElektros() const {

	return elektros;
}


//-- Accessory Methods
void Player::setElektros(int elektros) {
	this->elektros = elektros;
}



//Test functions

void Player::showColor() {
	cout << "Coal cost " << resources[0]->getCost() <<endl << "Color: " << resources[0]->getColor() << endl;
}