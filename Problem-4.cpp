//Create a program that will accept three numbers as input and display the LARGEST number
//of the three.
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2)
    {
        if (n1 >= n3)
            cout << "The LARGEST number of three: " << n1;
        else
            cout << "The LARGEST number of three: " << n3;
    }
    else
    {
        if (n2 >= n3)
            cout << "The LARGEST number of three: " << n2;
        else
            cout << "The LARGEST number of three: " << n3;
    }

    return 0;
}
