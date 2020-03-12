#include <iostream>
#include "CarFactory.hpp"
#include "Car.hpp"

using namespace std;

int main(int argc, char *argv[]) {
	CarFactory *factory;

	factory = new PlasticCarFactory();
	Car* c = factory -> createCar();
	c->display();

	delete factory;
	delete c;

	factory = new SteelCarFactory();
	c = factory->createCar();
	c->display();

	delete factory;
	delete c;

	return 0;
}