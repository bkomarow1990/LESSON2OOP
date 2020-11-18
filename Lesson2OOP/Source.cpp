#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;
int main() {
	Vehicle bike;
	bike.setBrand("Yamaha");
	bike.setMaxSpeed(260);
	bike.setYear(2020);
	bike.print();
	Vehicle car("Subaru",2018,240);
	car.print();
	Vehicle car2("BMW", 2005);
	car2.print();
	return 0;
}