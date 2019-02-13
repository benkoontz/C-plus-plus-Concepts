#include <iostream>
#include <fstream>
using namespace std;

// Files are useful when you want to save data on your computer



int main()
{
    // how you create a file object
    ifstream bensFile("players.txt");

    // is_open is commonly used to check if a file is open
    if(bensFile.is_open()) {

        int id;
        string name;
        double money;

        while(bensFile >> id >> name >> money) {
           cout << id << ", " << name << ", " << money << endl;
        }

    } else {
        cout << "the file is not open " << endl;
    }

    bensFile.close();



}
