//Write the include statement for types.h here
#include<iostream>
#include "types.h"

using std::cout; using std::cin;

//Write include for capturing input from keyboard and displaying output to screen



int main() 
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	int result = multiply_numbers(num);
	cout<<"Result is: "<<result<<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Result is: "<<result<<"\n";

	return 0;
}

