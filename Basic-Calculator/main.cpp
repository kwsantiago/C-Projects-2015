#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float a;
    float b;
    char type;
    cout << "Please enter a math problem between two numbers: ";
    cin >> a;
    cin >> type;
    cin >> b;
    cout << "The answer is: ";
    if (type == 43)
    {
        cout << a+b << endl;
    }
    else if (type == 45)
    {
        cout << a-b << endl;
    }
    else if (type == 47)
    {
        cout << a/b << endl;
    }
    else if (type == 42)
    {
        cout << a*b << endl;
    }
    else
    {
        cout << "Sorry, I could't understand you. \n";
    }
    system("PAUSE");
}
