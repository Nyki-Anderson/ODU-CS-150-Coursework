#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void trackVar(double& x, double y);

int main()
{
    double one, two;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter two numbers: ";
    cin >> one >> two;
    cout << endl;

    trackVar(one, two);
    cout << "one = " << one << ", two = " << two << endl;

    trackVar(two, one);
    cout << "one = " << one << ", two = " << two << endl;


    return 0;
}

void trackVar(double& x, double y)
{
    double z;
    z = floor(x) + ceil(y);
    x = x + z;
    y = y - z;

    cout << "z = " << z << ", ";
}
