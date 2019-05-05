#include <iostream>
#include <conio.h>
using namespace std;

 int main()
 
 {
 	int a;
 	
 	cout << "Enter a positve number: ";
 	cin >> a;
 	cout << "Multipication table of " << a << ":" << endl;
 	
 	for (int i=1; i <= 10; i++)
 	{
			cout << i << " * " << a << " = " << a * i << endl;
 	}
 	
 	return 0;
}
