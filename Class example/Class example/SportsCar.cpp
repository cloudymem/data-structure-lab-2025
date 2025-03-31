#include "Car.h"

class SportsCar :public Car
{
public:
	bool bTurbo;
	void setTurbo(bool bTur)
	{
		bTurbo = bTur;
	}
	void speedUp()
	{
		if (bTurbo)
			speed += 20;
		else
			Car::speedUp();
	}
};
int main()
{
	Car myCar;
	Car MomsCar(10, "K5", 2);

	myCar.whereAmI();
	MomsCar.whereAmI();
	myCar.changeGear(3);
	MomsCar.speedUp();
	MomsCar.display();
}