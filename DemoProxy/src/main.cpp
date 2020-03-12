#include <iostream>
#include "PC.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	PC p;
	p.configure_internet();
	p.configure_proxy();
	InternetAccess ie;
	ie.setPC(p);

	ie.browse("facebook.com");
	ie.browse("voz.com");

	
	return 0;
}
	