#include <iostream>
using namespace std;

int main()
{
    int i;
    int value = 3;

    for (i = 0; i < 5; i++)
        value = value * (i + 1) + i;

    cout << "value = " << value << endl;


    return 0;
}
