/* 
 * File: Chapter 1 Problem 9
 * Author: Bank Conway
 *
 * Created on June 26, 2014, 12:13 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
    float distance;
    unsigned short acceleration = 32; //feet per sec^2
    float time; // in sec
    
    cout << "Enter the time in seconds while the object is falling.\n";
    cin >> time;
    
    distance = (acceleration * (time*time))/2;
    
    cout <<"The object travel the distance of " << distance <<" feet\n";
    cout <<"Don't jump, you won't survive";
    return 0;
}

