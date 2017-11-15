#include <iostream>
#include "Car.h"

using namespace std;
/*
A function to create a new car.
*/
Car *createANewCar()
{
	char input[SIZE_STRING];
	int number;
	Car *c = new Car();
	cout << "Please enter details of car:\nenter make: ";
	cin >> input;
	c->setMake(input);
	cout << "enter model: ";
	cin >> input;
	c->setModel(input);
	cout << "enter year: ";
	cin >> number;
	c->setYear(number);
	cout << "enter engine volume: ";
	cin >> number;
	c->setEngineVolume(number);
	cout << "enter color: ";
	cin >> input;
	c->setColor(input);
	cout << "\n";
	return c;
}

/*
A program that uses in Car.h
create two cars and compare between them.
*/
int main()
{
	Car * c1 = createANewCar(), * c2 = createANewCar();
	cout << "The bigger when compare by year:\n" << c1->compareByYear(*c2) << "\n";
	cout << "The bigger when compare by engine volume:\n" << c1->compareByEngineVolume(*c2) << "\n";
	return 0;
}