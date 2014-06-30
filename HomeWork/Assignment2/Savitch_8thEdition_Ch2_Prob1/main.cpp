/* 
 * File: Chapter 2 Problem 1
 * Author: Bank Conway
 * Created on June 28, 2014, 4:21 PM
 */

//Library System
#include <iostream>
using namespace std;

//Execution
int main() 
{
    //Declare variable
    float mTon, CrOunces, CrMTn, Box; //CrMTn is Cereal weight in Metric Ton, 
    char RnAgn;
    
    cout <<"Please Enter the weight of cereal package in ounces.\n"; //Prompt
    cin >> CrOunces;
    CrMTn = (CrOunces/3.527392e4);
    Box = 1/CrMTn;
    cout << "There are " << CrMTn <<" Metric Ton of Cereal"<< endl;
    cout <<"So we need " << Box << " boxes of cereal to yield 1 Metric Tone.\n";
    cout << "Would you like to continue?(y/n)\n";
    cin >> RnAgn ;
    
    if(RnAgn != 'y')
    {
        cout <<"Have a nice day!\n";
        return 0;
    }

    else
    {
        cout <<"Please Enter the weight of cereal package in ounces.\n"; 
        cin >> CrOunces;
        CrMTn = (CrOunces/3.527392e4);
        Box = 1/CrMTn;
         cout << "There are " << CrMTn <<" Metric Ton of Cereal"<< endl;
        cout <<"So we need " << Box << " boxes of cereal to yield 1 Metric Tone.\n";
        
    }
    
   
            
      
return 0;}
    
