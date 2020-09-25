//Write the include statement for decisions.h here
#include<iostream>
#include "decision.h"
#include<string>
//Write namespace using statements for cout and cin
using std::cout; using std::cin;

int main() 
{	
	int grade;
	cout<<"Enter your grade: ";
	cin>>grade;
	
	if (grade >= 0 && grade <= 100) 
	{

		string letterGradeIf = get_letter_grade_using_if(grade);
		string letterGradeSwitch = get_letter_grade_using_switch(grade);

		cout<<"Letter grade using If: "<<letterGradeIf<<"\n";
		cout<<"Letter grade using Switch: "<<letterGradeSwitch<<"\n";

		return 0;
	}
	else {
		cout<<"Number out of range\n";
	}
}

