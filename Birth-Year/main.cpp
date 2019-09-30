#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Please enter your birth year: ";
    cin >> year;
    cout << "You are " << 2019 - year << " years old and you were born in the ";
    if (year > 2000)
    {
        cout << "21st century. \n";
    }
    else if (year < 1950)
    {
        cout << "first half of the 20th century. \n";
    }
    else
    {
        cout << "second half of the 20th century. \n";
    }

    return 0;
}
