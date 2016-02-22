#include "PowerplantManager.h"
#include "Powerplant.h"

PowerplantManager::PowerplantManager() {



	Powerplant* coal4 = new Powerplant(4, "coal", 2, 1);
	Powerplant* coal8 = new Powerplant(8, "coal", 3, 2);
	Powerplant* coal10 = new Powerplant(10, "coal", 2, 2);
	Powerplant* coal15 = new Powerplant(15, "coal", 2, 3);
	Powerplant* coal20 = new Powerplant(20, "coal", 3, 5);
	Powerplant* coal25 = new Powerplant(25, "coal", 2, 5);
	Powerplant* coal31 = new Powerplant(31, "coal", 3, 6);
	Powerplant* coal36 = new Powerplant(36, "coal", 3, 7);
	Powerplant* coal42 = new Powerplant(42, "coal", 2, 6);

	Powerplant* oil3 = new Powerplant(3, "oil", 2, 1);
	Powerplant* oil7 = new Powerplant(7, "oil", 3, 2);
	Powerplant* oil9 = new Powerplant(9, "oil", 1, 1);
	Powerplant* oil16 = new Powerplant(16, "oil", 2, 3);
	Powerplant* oil26 = new Powerplant(26, "oil", 2, 5);
	Powerplant* oil32 = new Powerplant(32, "oil", 3, 6);
	Powerplant* oil35 = new Powerplant(35, "oil", 1, 5);
	Powerplant* oil40 = new Powerplant(40, "oil", 2, 6);

	Powerplant* hybrid5 = new Powerplant(5, "hybrid", 2, 1);
	Powerplant* hybrid12 = new Powerplant(12, "hybrid", 2, 2);
	Powerplant* hybrid21 = new Powerplant(21, "hybrid", 2, 4);
	Powerplant* hybrid29 = new Powerplant(29, "hybrid", 1, 4);
	Powerplant* hybrid46 = new Powerplant(46, "hybrid", 3, 7);

	Powerplant* garbage6 = new Powerplant(6, "garbage", 1, 1);
	Powerplant* garbage14 = new Powerplant(14, "garbage", 2, 2);
	Powerplant* garbage19 = new Powerplant(19, "garbage", 2, 3);
	Powerplant* garbage24 = new Powerplant(24, "garbage", 2, 4);
	Powerplant* garbage30 = new Powerplant(30, "garbage", 3, 6);
	Powerplant* garbage38 = new Powerplant(38, "garbage", 3, 7);

	Powerplant* uranium11 = new Powerplant(11, "uranium", 1, 1);
	Powerplant* uranium17 = new Powerplant(17, "uranium", 1, 2);
	Powerplant* uranium23 = new Powerplant(23, "uranium", 1, 3);
	Powerplant* uranium28 = new Powerplant(28, "uranium", 1, 4);
	Powerplant* uranium34 = new Powerplant(34, "uranium", 1, 5);
	Powerplant* uranium39 = new Powerplant(39, "uranium", 1, 6);

	Powerplant* eco13 = new Powerplant(13, "eco", 0, 1);
	Powerplant* eco18 = new Powerplant(18, "eco", 0, 2);
	Powerplant* eco22 = new Powerplant(22, "eco", 0, 2);
	Powerplant* eco27 = new Powerplant(27, "eco", 0, 3);
	Powerplant* eco33 = new Powerplant(33, "eco", 0, 4);
	Powerplant* eco37 = new Powerplant(37, "eco", 0, 4);
	Powerplant* eco44 = new Powerplant(44, "eco", 0, 5);
	Powerplant* eco50 = new Powerplant(50, "eco", 0, 6);

	//Powerplant* step3 = new Powerplant(-1, "Step 3", -1, -1);
}

PowerplantManager::~PowerplantManager() {

}