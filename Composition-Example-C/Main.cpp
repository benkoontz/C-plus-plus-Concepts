#include <iostream>
#include "Birthday.h"
#include "People.h"


// composition is using objects of other classes inside your class
using namespace std;

int main()
{
	Birthday birthObj(12, 12, 1994);
	People ben("ben", birthObj);
	ben.printInfo();

	system("pause");
}
