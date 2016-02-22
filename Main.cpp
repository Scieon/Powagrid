#include <iostream>
#include "Player.h";
#include "Powerplant.h";
#include "ResourceManager.h"
#include "Resource.h";

using namespace std;

int main() {

	Player p1;
	Powerplant* pp1 ;
	Player p2("blue");
	Player *p3 = new Player("red");
	p2.showInfo();

	Oil o1;

	int cost = o1.getCost();
	o1.setCost(200);
	cout << "Cost is " << cost << endl;
	cost = o1.getCost();
	cout << "Cost is " << cost << endl;

	Resource *r1 = new Oil();
	cout << endl << r1->getCost() << endl;


	cin.get();
	return 0;
}