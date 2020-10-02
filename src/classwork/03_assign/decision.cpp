//cpp
#include "decision.h"
#include <string>

using std::string;



string get_letter_grade_using_if(int grade)
{
    string letterGrade;
    
    if (grade>=90 && grade<=100) {
         letterGrade = "A";
    }
    else if (grade>=80 && grade<=89){
        letterGrade = "B";
    }
    else if (grade>=70 && grade<=79){
        letterGrade = "C";
    }
    else if (grade>=60 && grade<=69){
        letterGrade = "D";
    }
    else {
        letterGrade = "F";
    }

    return letterGrade;
}

string get_letter_grade_using_switch(int grade){
    switch (grade/10)
    {
    case 10:
        return "A";
        break;
    case 9:
        return "A";
        break; 
    case 8:
        return "B";
        break;
    case 7:
        return "C";
        break;
    case 6:
        return "D";
        break;		   
     default:   
         return "F";
    }

}