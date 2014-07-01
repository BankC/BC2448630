/* 
 * File: Chap2 Problem 6
 * Author: Bank Conway
 *
 * Created on July 1, 2014, 3:15 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    int maxoc, numpeo;
    cout <<"Please enter the maximum occupancy.\n";
    cin >> maxoc;
    cout << "Please enter the number of people that will be attending\n";
    cin >> numpeo;
    
    if(numpeo <= maxoc)
    {
        int addpeo;
       addpeo = maxoc - numpeo;
      
       cout <<"The meeting can be legally held.\n";
       cout <<"There is still room for " << addpeo << " person.\n";
    }
       else
       { 
        cout <<"This meeting violate the fire regulation.\n";
       }
    
    return 0;
}

