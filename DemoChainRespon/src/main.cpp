#include <iostream>
#include "Developer.hpp"
using namespace std;

int main(int argc, char *argv[]) {
	string product = "Flappy Bird";
	Developer *d = new Desginer();
	Developer *c = new Coder();
	Developer *t = new Tester();

	d->setNextDeveloper(c);
	c->setNextDeveloper(t);

	d->develop(product);

	delete t;
	delete c;
	delete d;

	return 0;
}