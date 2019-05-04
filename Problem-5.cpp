//Create a program that will “count” numbers, separated by commas, up to 10. When it
//reaches 10, count by 2s until you reach 30. See the sample output below:
//Counting…
//1,2,3,4,5,6,7,8,9,10,12,14,16,18,20,22,24,26,28,30


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int a, m;


for (a=1 ; a<=1; a++) {
	// skip 3
	if (a==3) continue;
	cout << a << ",";
	
	
	for (m=2 ; m<=9 ; m++) {
		//only count up to 3
		cout << m<< ",";
			
		
	}
	
		for (m=10 ; m<=30 ; m+=2) {
		//only count up to 3
		if (m==30) break;
		cout << m<< ",";
		
	}
	
			for (m=30 ; m<=31 ; m+=2) {
		//only count up to 3
		if (m==31) break;
		cout << m<< "";
		
	}
	
	cout << endl;

	}
return 0;
}


