#include <iostream>
using namespace std;

// A virtual function can be overwritten by another class and runs automatically if not overwritten
// A pure virtual function doesn't do anything
// Any class that inherits a pure virtual function needs to override that function
// An abstract class is a class that has a pure virtual function in it

class Enemy{
	public:
		virtual void attack()=0; // pure virutal function
	
		//virtual void attack() {	// virtual function
		//	cout << "virtual function" << endl;
		//}
 
			
};
class Ninja: public Enemy{
	public:
		void attack()
		{cout << "ninja attack!" <<endl;}
};

class Monster: public Enemy{
	public:
		void attack()
		{cout << "monster attack!" << endl;}
};
int main()
{
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	enemy1->attack();
	enemy2->attack();

}
