#include <iostream>
#include "Printer.hpp"
#include "PC.hpp"
#include "Server.hpp"
using namespace std;

int main(int argc, char *argv[]) {
	Server *s = new Server();
	s->configurePrinter();

	PC p1(s), p2(s);

	p1.connect();
	p2.connect();

	p1.print("Tai_lieu.doc");
	p2.print("Bao_cao.pdf");

	return 0;
}