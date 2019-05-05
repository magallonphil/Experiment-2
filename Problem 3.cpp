#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main ()
{

	int x,y;
	double V;
	cout << "Input value of x: ";
	cin >> x;
	cout << "Input value for y: ";
	cin >> y;
	cout << "Let value for z = 2.5\n";
	
	switch(x)
	{
	case 1: if (1 < y < 5)
		{
		
		cout <<"V= xyz\nV=" << x * y * 2.5 << endl; }
	
	else if (y <= 5);
			{
			
		cout << "V= x + y/z\nV=" << x + (y/2.5) << endl; }
		break;
			
	case 2: if (y <= 5)
		{
			
		cout << "V= |(x - y)/z|\nV="<< abs ((x-y)/2.5)<< endl;}
			
	else if (y>5);
				{
		V= x - sqrt (y + 2.5);
		cout << "V= sqrt of y + z" << "\n" << V <<endl;
					
		default: 
		cout << "V= x + y + z" << "\n" <<  x + y + 2.5;
				}

		
		}
	return 0;	
}
