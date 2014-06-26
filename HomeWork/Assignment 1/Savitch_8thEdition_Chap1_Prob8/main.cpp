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
    
    unsigned short penny, nickel, dime, quarter,pamt, nkamt, damt, qramt, total;
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
    pamt = penny * 1;
    nkamt = nickel * 5;
    damt = dime * 10;
    qramt = quarter * 25;
    total = pamt + nkamt + damt + qramt;
    
    //output
    cout <<"The total is " << total << " cents"<< endl;
            
  
    
    
   //Exit
    return 0;
}

