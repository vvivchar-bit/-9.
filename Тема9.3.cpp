#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try
    {
        if (age < 18)
            throw "Access denied. Age is less than 18.";

        cout << "Access granted." << endl;
    }
    catch (const char* error)
    {
        cout << error << endl;
    }

    return 0;
}
