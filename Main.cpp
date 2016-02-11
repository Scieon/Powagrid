#include <iostream>
#include "Player.h";
using namespace std;

int main() {

	Player p1;
	Player p2("blue");
	Player *p3 = new Player("red");
	p2.showInfo();





	cin.get();
	return 0;
}