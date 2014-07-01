/* 
 * File: Chap 2 Problem 16
 * Author: Bank Conway
 * Created on July 1, 2014, 4:25 PM
 */

//System Library
#include <iostream>

using namespace std;

//User Library

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declare Variables
    double radius, vm;
    
    //prompt 
    cout << "Enter radius of a sphere in inches.\n";
    cin >> radius;
    
    //Process
    vm = (4.0/3.0)*3.14145*(radius*radius*radius);
    
    //answer
    cout << "The volume is " <<vm<< " square inches.\n";
    
    
    return 0;
}

