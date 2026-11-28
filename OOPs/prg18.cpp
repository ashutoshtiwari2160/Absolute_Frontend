
#include <iostream>
using namespace std;

// Function 1: Adds two integers
int add(int a, int b)
{
    return a + b;
}

// Function 2: Adds three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function 3: Adds two floating-point numbers
float add(float a, float b)
{
    return a + b;
}

// Function 4: Adds two double values
double add(double a, double b)
{
    return a + b;
}

int main()
{
    int result1;
    int result2;
    float result3;
    double result4;

    // Calling function 1
    result1 = add(10, 20);

    // Calling function 2
    result2 = add(10, 20, 30);

    // Calling function 3
    result3 = add(5.5f, 4.5f);

    // Calling function 4
    result4 = add(10.25, 20.75);

    // Displaying results
    cout << "Addition of two integers: "
         << result1 << endl;

    cout << "Addition of three integers: "
         << result2 << endl;

    cout << "Addition of two floats: "
         << result3 << endl;

    cout << "Addition of two doubles: "
         << result4 << endl;

    return 0;
}
