#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	int num, a=0, b=1, c=0;
	
	cout << "20 Fibonacci Numbers\n\n";
	for (num =0; num <= 21; num++)
	{
		if (num == 0)
		{
            cout << " " << a;
            continue;
        }
        if (num == 1)
        {
            cout << "," ;
            cout << b << ",";
            continue;
	
		}
		 c = a + b;
         a = b;
         b= c;
        
        cout << c << ",";
    }
    return 0;
}

