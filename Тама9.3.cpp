#include <iostream>
using namespace std;

int main()
{
    try
    {
        int choice;
        cout << "Enter 1 for int exception, 2 for string exception: ";
        cin >> choice;

        if (choice == 1)
            throw 404;
        else if (choice == 2)
            throw "Text exception";
        else
            cout << "No exception." << endl;
    }
    catch (int errorCode)
    {
        cout << "Integer exception caught: " << errorCode << endl;
    }
    catch (const char* message)
    {
        cout << "String exception caught: " << message << endl;
    }

    cout << "Program finished." << endl;
    return 0;
}