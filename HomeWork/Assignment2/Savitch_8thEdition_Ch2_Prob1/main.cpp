/* 
 * File: Chapter 2 Problem 1
 * Author: Bank Conway
 * Created on June 28, 2014, 4:21 PM
 */

#include <iostream>

using namespace std;


int main() 
{
    //Declare variable
    float mTon, CrOunces, CrMTn, Box; //CrMTn is Cereal weight in Metric Ton, 
    int count_down = 1, ch;
    
    //Execution
   if(count_down > 0)
   { cout <<"Please Enter the weight of cereal package in ounces.\n"; //Prompt
    cin >> CrOunces;
    CrMTn = (CrOunces/3.527392e4);
    Box = 1/CrMTn;
    cout << "There are " << CrMTn <<" Metric Ton of Cereal"<< endl;
    cout <<"So we need " << Box << " boxes of cereal to yield 1 Metric Tone.\n";
    cout << "Would you like to continue?(y/n)\n";
    cin >> ch;
    if(ch = 5){count_down ++;}
    else {return 0;}}
   
   
   else {return 0;}               
        
            
      
 
    
 return 0;}

