#include "People.h"
#include <iostream>
#include "Birthday.h"


using namespace std;

//constructor
People::People(string x, Birthday bo)  
: name(x), dateOfBirth(bo) // member initializier list for working with a class inside of another class, sets name to x and dateOfBirth to bo
{
}

void People::printInfo() {
	cout << name << " was born on ";
	dateOfBirth.printDate();


}
