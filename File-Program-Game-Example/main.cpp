#include <iostream>
#include <fstream>
using namespace std;


int getWhatTheyWant();
void displayItems(int x);

// main function
int main()
{

    int whatTheyWant;

    whatTheyWant = getWhatTheyWant();

    while(whatTheyWant != 4) {
        switch(whatTheyWant) {
        case 1:
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;


        }

        whatTheyWant = getWhatTheyWant();

    }


}

//get what they want function
int getWhatTheyWant() {
    int choice;

    cout << "\n1 for just plain items" << endl;
    cout << "2 for helpful items" << endl;
    cout << "3 for harmful items" << endl;
    cout << "4 quit program\n" << endl;

    cin >> choice;
    return choice;
}

// display items function
void displayItems(int x) {

    ifstream objectsFile("objects.txt");

    string name;
    double power;

    if(x==1) {
        while(objectsFile >> name >> power) {
            if(power == 0){
                cout << name << ' ' << power << endl;
            }
        }

    }

    if(x==2) {
        while(objectsFile >> name >> power) {
            if(power > 0){
                cout << name << ' ' << power << endl;
            }
        }

    }

    if(x==3) {
        while(objectsFile >> name >> power) {
            if(power < 0){
                cout << name << ' ' << power << endl;
            }
        }

    }
}
