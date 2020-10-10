//write include statements
#include<iostream>
#include "dna.h"
//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int choice;
char option;
std::string dna;
int main() 
{	
	do {
		cout<<"Enter an DNA string: ";
		cin>>dna;

		cout<<"1.Get GC Content\n2.Get DNA Complement\n";
		cout<<"Enter your choice: ";
		cin>>choice;

		if (choice == 1){
			double content = get_gc_content(dna);
			cout<<"GC Content: "<<content<<"\n";
		}
		else if (choice == 2){
			std::string complemnt = get_dna_complement(dna);
			cout<<"Complement string: "<<complemnt<<"\n";
		}
		else {
			cout<<"Invalid option"<<"\n";
		}
		
		cout<<"Do you want to continue?(Y/N): ";
		cin>>option;
	} while (option == 'y' || option == 'Y');

	return 0;
}