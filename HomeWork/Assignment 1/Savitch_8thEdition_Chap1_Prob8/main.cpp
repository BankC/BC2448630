/* 
 * File: Chapter1 Problem 8
 * Author: Bank Conway
 * Created on June 26, 2014, 11:08 AM
 * Purpose
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
    
    //Declare variable 
    unsigned short penny, nickel, dime, quarter,pamt, nkamt, damt, qramt, total;
    
    //User interaction
    cout << "Press Enter after entering the number of coins\n";
    cout <<"Enter numbers of pennies\n";  
    cin >> penny;
    
    cout <<"Enter numbers of nickel\n";
    cin >> nickel;
    
    cout <<"Enter numbers of dimes\n";
    cin >> dime;
    
    cout <<"Enter numbers of quarters\n";
    cin >> quarter;

    //Process 
    pamt = penny * 1;     //penny calculations
    nkamt = nickel * 5;   //nickels calculation
    damt = dime * 10;     //dimes calculation
    qramt = quarter * 25; //quarters calculation
    total = pamt + nkamt + damt + qramt;
    
    //output
    cout <<"The total is " << total << " cents"<< endl;
            
  
    
    
   //Exit
    return 0;
}

