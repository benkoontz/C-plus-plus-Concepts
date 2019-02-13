#include <iostream>
using namespace std;


// a friend has access to varibles and functions in another class
class Ben {
	public:
		Ben() {benVar = 0;}
	private:
		int benVar;

	friend void benFriend(Ben &benObject);
};

void benFriend(Ben &benObject) {
	benObject.benVar = 10;
	cout << benObject.benVar << endl;
}

int main()
{
	Ben hello;
	benFriend(hello);

	system("pause");
}
