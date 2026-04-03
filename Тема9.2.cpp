#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 100;
    }
    catch (...)
    {
        cout << "Unknown exception was caught." << endl;
    }

    cout << "Program finished." << endl;
    return 0;
}
