#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

//Static Counter
int Player::number_of_players = 0;


//-- Constructors and Destructors
Player::Player() : elektros(5){
	
	//coal.setCost(50);
	++number_of_players;
}

Player::Player(string color) : elektros(50), color(color) {
	//coal.setCost(5);
	++number_of_players;
}
Player::~Player() {
	--number_of_players;
}


//-- Accessor and Mutators
void Player::showInfo() const {

	cout << "Number of players: " << number_of_players << endl << "Elektros: " << elektros << endl << "Color: " << color << endl << "Coal Cost: " << endl;//coal.getCost() << endl;
}

int Player::getElektros() const {

	return elektros;
}


//-- Accessory Methods
void Player::setElektros(int elektros) {
	this->elektros = elektros;
}

