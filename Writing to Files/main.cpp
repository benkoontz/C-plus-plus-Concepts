#include <iostream>
#include <fstream>
using namespace std;

// Files are useful when you want to save data on your computer



int main()
{
    // how you create a file object
    ofstream bensFile("players.txt");

    // is_open is commonly used to check if a file is open
    if(bensFile.is_open()) {
        cout << "enter players ID, name, and money" << endl;
        cout << "press ctrl+z to quit\n" << endl;

        int idNumber;
        string name;
        double money;

        while(cin >> idNumber >> name >> money) {
            bensFile << idNumber << " " << name << " " << money << endl;
        }

    } else {
        cout << "the file is not open " << endl;
    }

    bensFile.close();



}
