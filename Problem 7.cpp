#include <iostream>
#include <conio.h>
using namespace std;

int a, sum;
int main()

{ 	
	do
	{	cout << "Enter positive number: ";
		cin >> a;
		sum=0;
		for (int i=0; i <= a; i++)

		{
			if (a<1)
			{	cout << "Thank You!" << endl;
				break;
			}
			else
				{
				
					sum += i;		
				}
			}	if (a>0)
			cout << "The sum of all whole numbers from 1 to " << a << " is " << sum << endl;
	}while (a>0);
return 0;
}
	
