#include "SportsCar.h"
#include "Car.h"
#include "Complex.h"

int main()
{
	Car myCar;
	Car MomsCar(10, "K5", 2);
	SportsCar mySecondCar;

	myCar.whereAmI();
	MomsCar.whereAmI();
	myCar.changeGear(3);
	MomsCar.speedUp();
	MomsCar.display();
	mySecondCar.setTurbo(true);

	Car::name = "50";
}