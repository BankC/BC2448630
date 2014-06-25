/* 
 * File: Chap1 Problem 6
 * Author: Bank Conway
 * Created on June 25, 2014, 1:47 PM
 * Purpose: Familiarize with error in the program 
 */
/* Error Records
 * a.) main.cpp:8:21: fatal error:  iostream: No such file or directory
 *
 * b.)main.cpp:17:10: error: #include expects "FILENAME" or <FILENAME>
 *    main.cpp: In function ‘int main()’:
 * 
 * c.)The program runs fine
 *
 * d.)In function `main':/usr/src/debug/cygwin-1.7.24-1/winsup/cygwin/lib/
 *    libcmain.c:39: undefined reference to `WinMain@16'
 *    collect2: error: ld returned 1 exit status
 * 
 * e.)main.cpp:31:5: error: expected primary-expression before ‘int’
 * 
 * f.) 1.) main.cpp:32:5: error: ‘cut’ was not declared in this scope
 *     2.) main.cpp: In function ‘int main()’:main.cpp:33:10: error: expected ‘;’ before string constant
 *     3.) main.cpp:32:5: error: expected initializer before ‘int’
 */


#include <iostream> 
using namespace std;

int main ()
{
    int number_of_pods, peas_per_pod, total_peas_sum, total_peas; 
    cout << "Hello"<<endl;
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
    cout <<"Good bye\n";
//Exit
    return 0;
}