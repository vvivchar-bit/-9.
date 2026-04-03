#include <iostream>
using namespace std;

int getDenominator(int value)
{
    if (value == 0)
        throw "Division by zero in function";

    return value;
}

int main()
{
    try
    {
        int denominator = getDenominator(0);
        int result = 100 / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const char* error)
    {
        cout << "Caught error: " << error << endl;
    }

    cout << "Program finished." << endl;
    return 0;
}
