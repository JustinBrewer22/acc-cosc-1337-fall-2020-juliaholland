//write includes statements
#include<iostream>
#include "loops.h"
//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{	
	int num;
	char choice;
	do {
		do {
			cout<<"Enter your number: ";
			cin>>num;

		} while(num<0 || num >10);

		int result = factorial(num);

		cout<<"Factorial of num is: "<<result<<"\n";

		cout<<"Do you want to continue(y/Y): ";
		cin>>choice; 
	} while (choice == 'y' || choice == 'Y');
	
	return 0;
}