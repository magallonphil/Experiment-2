#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int a, b;
	cout << "Enter Number of rows: ";
	cin >> a;
	cout << "Enter Number of columns: ";
	cin >> b;
	
	for (int i=1; i <= a; i++)
	{
		for (int n=1; n <= b; n++)
			{
				cout << "*";
			}
		cout <<"\n";
	
	}	
	
	return 0;
}
