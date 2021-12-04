#include <iostream>
#include "Street.h"

int main()
{
	Street s = Street(20);
	for (std::vector<Building*>::iterator i = s.getStreet().begin(); i < s.getStreet().end(); i++) {
		(*i)->info();
	}
}
