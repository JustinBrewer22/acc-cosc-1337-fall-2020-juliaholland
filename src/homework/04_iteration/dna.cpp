#include<string>
#include "dna.h"
#include<iostream>

using std::cout; using std::cin;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string& dna)
{
    double countG = 0, countC = 0;

    for (std::size_t i = 0; i < dna.size(); i++)
     {
         switch (dna[i])
         {
         case 'G':
            countG+=1;
            break;
         case 'C':
            countC+=1;
            break;
         default:
             break;
         }        
     }

    double result = (countG+countC)/dna.size(); 

    return result;
};


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string dna)
{
    std::string reverseString;
    for (std::size_t i = dna.size(); i>=1; i--) 
    {
        reverseString += dna[i-1];
    } 
    return reverseString;
};


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string dna)
{
    std::string complementString;
    std::string reverseDNA = get_reverse_string(dna);
    for (std::size_t i = 0; i < reverseDNA.size(); i++)
    {
        switch (reverseDNA[i])
        {
            case 'A':
                complementString += "T";
                break;
            case 'T':
                complementString += "A";
                break;
            case 'C':
                complementString += "G";
                break;
            case 'G':
                complementString += "C";
                break;
            default:
                break;
        }
    }
    return complementString;
};

