#include <iostream>
#include "Player.h";
#include "Powerplant.h";
#include "ResourceManager.h"
#include "Resource.h";

using namespace std;

int main() {

	Player p1;
	
	Player p2("blue");
	Player *p3 = new Player("red");
	p2.showInfo();

	Oil o1;

	int cost = o1.getCost();
	o1.setCost(200);
	cout << "Cost is " << cost << endl;
	cost = o1.getCost();
	cout << "Cost is " << cost << endl;

	Resource *r1[3];



	r1[0] = new Oil();
	r1[1] = new Coal();
	r1[2] = new Oil(); 
	cout << endl << r1[0]->getCost() << endl << r1[1]->getCost() << endl;


	cin.get();
	//delete [] r1;
	delete r1[1];
	cin.get();
	return 0;
}