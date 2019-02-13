#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// no computer random number generator is truly random, they follow certain algorithms





int main()
{

    srand(time(0)); // Srand changes the time values. The time function gives a random time.

	for(int i = 0; i < 25; i++) {
        cout << 1+rand()%6 << endl; // %6 returns a number by 6 and gives a remainder
	}


}
