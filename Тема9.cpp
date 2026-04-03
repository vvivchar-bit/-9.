#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;

    try
    {
        if (b == 0)
            throw "Division by zero";

        int result = a / b;
        cout << "Result: " << result << endl;
    }
    catch (const char* error)
    {
        cout << "Error: " << error << endl;
    }

    cout << "Program finished." << endl;
    return 0;
}
