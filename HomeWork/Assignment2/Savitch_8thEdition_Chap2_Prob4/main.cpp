/* 
 * File:   Chap2 Problem 4
 * Author: Bank Conway
 * Created on July 1, 2014, 3:07 PM
 */

//System library
#include <iostream>
using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) 
{
//Declare variable
    const float raise = 0.076;
    double slry, Nslry, MthlySal;
    short month;

    
  cout << "Please input your annual salary.\n";
  cin >> slry;
  cout << "Please enter the number of months your salary increase.\n";
  cin >> month;
  
  Nslry = slry+(((slry/12)*raise)*month);
  MthlySal = Nslry/12;
  
  cout <<"Your new annual salary is "<< Nslry << " dollars" <<endl;
  cout <<"Your new monthly salary is "<< MthlySal << " dollars" << endl;
  
  
   
    return 0;
}
