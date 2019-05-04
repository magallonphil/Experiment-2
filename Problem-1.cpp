

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

 string package;
 float hours;
 float price;

cout<< "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr. \n "; 

cout<< "Package B: For P1495lmo 20 hrs of access are provided Additional hours are P10/hr. \n "; 

cout<< "Package C: For P1995/mo of unlimited access is provided. \n "; 
  
  cout<< "Enter package A, B, or C (Capital): "; 
  cin>> package;
  
  

 if ((package == "A") || (package == "B") || (package == "C")) 
 {
  cout<< "Enter number of hours "; 
  cin>> hours;

// Package A
if (package == "A") 
{ if (hours > 10) 
{ price = 995+(hours-10)*20; } 

else 
{ price = 995;}}

// Package B
else if (package == "B") 
{ if (hours > 20) 
{ price = 1495 + (hours - 20) * 10; } 

else 
{ price = 1495;} }  

// Package C
else 
{ price = 1995; }

} 

else 
 { cout << "Invalid"; }
 
cout << "Monthly Bill: PHP " << price;
} 

