#include <iostream>
#include <cstdlib>
using namespace std;

int main( )
{
   char fName[50];
   char lName[50];
   int age = 13;
   int age1;

    cout << "Welcome to this website!" << endl;
    cout << "In order to enter the website, you will need to enter the following information:" << endl;
    cout << "Please enter your first name: ";
    cin >> fName;
    cout << "Please enter your last name: ";
    cin >> lName;
    cout << "Please enter your age: ";
    cin >> age1;
    {
            if (age1 >= 13)
        cout << "Greetings " << fName << " " << lName << " " << "and welcome to the site!" << endl;
           else
        cout << "You are too young to view this page." << endl;
    }
    system("PAUSE");
    return 0;

}
