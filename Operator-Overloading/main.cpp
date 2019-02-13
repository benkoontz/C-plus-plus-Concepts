#include <iostream>
#include "Sally.h"
using namespace std;

// operating overloading allows you to c++ operators and change the way they're used
// instead of using c = a.add(b) you can use c = a + b

int main()
{
	Sally a(34);
	Sally b(21);
	Sally c;

	c = a + b; // add the objects a and b together. Use the operator+ function since you're adding
	cout << c.num << endl;


}
