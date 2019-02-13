#include <iostream>
using namespace std;

// unary scope resolution operator means us the global tuna
// when you make a variable global you can use it in the entire program
// functions will use the values of variables inside of them by default,
// they're taking the values that are the closest to them

int tuna = 69;

int main()
{
    int tuna = 32;
    cout << ::tuna << endl; // prints 69, :: is the unary scope resolution operator
    cout << tuna << endl; // prints 32


}
