/* 
 * File:  Chapter 1 Problem 4
 * Author: Bank Conway
 * Created on June 25, 2014, 1:27 PM
 * Purpose: Change multiplication sign to addition sign
 */

#include <iostream>
using namespace std;

int main() 
{
    int number_of_pods, peas_per_pod, total_peas;  // Set integer
    cout <<"Hello"<<endl;
    cout << "Press Enter after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin  >> peas_per_pod;
    total_peas = number_of_pods + peas_per_pod; //Calculation
    // The program runs fine, but the output number is wrong
    cout << "If you have "<< number_of_pods << " pea pods\n";
    cout <<"and ";
    cout <<peas_per_pod << " peas in each pod, then\n"; 
    cout <<"you have ";
    cout << total_peas <<" peas in all the pods.\n"; //Conclusion of Calculation
    cout <<"Good bye"<<endl;
//Exit
    return 0;
}

