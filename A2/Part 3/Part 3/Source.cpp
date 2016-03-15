#include <iostream>
#include "ResourceManager.h"
#include "ResourceMarket.h"

using namespace std;

int main() {

	ResourceMarket * market = new ResourceMarket();

	market->showInfo();
	cin.get();
	return 0;
}