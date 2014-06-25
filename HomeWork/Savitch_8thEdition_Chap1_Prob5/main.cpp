/*
 * File: Chapter 1 Problem 5
 * Author: Bank Conway
 * Created on June 25, 2014, 1:30 PM
 * Purpose: Modify so that the program read out two integers and output both their sum and product.
 */

#include <iostream>
using namespace std;

int main() 
{
    int number_of_pods, peas_per_pod, total_peas_sum, total_peas; 
    cout <<"Hello"<<endl;
    cout << "Press Enter after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin  >> peas_per_pod;
    total_peas_sum = number_of_pods + peas_per_pod; //Sum Calculation
    total_peas = number_of_pods * peas_per_pod; //Product calculation
    
    cout << "If you have "<< number_of_pods << " pea pods\n";
    cout <<"and ";
    cout <<peas_per_pod << " peas in each pod, then\n"; 
    cout <<"you have ";
    cout << total_peas <<" peas in all the pods.\n"; //Conclusion of Calculation
    cout <<"And the sum of peas and the pods is " << total_peas_sum << endl;
    cout <<"Good bye"<<endl;
//Exit
    return 0;
}
