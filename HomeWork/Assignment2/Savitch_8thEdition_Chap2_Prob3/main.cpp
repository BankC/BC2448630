/* 
 * File: Chapter 2 Problem 3
 * Author: Bank Conway 
 * Created on July 1, 2014, 2:49 PM
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

    
  cout << "Please input your annual salary\n";
  cin >> slry;
  
  Nslry = slry+(((slry/12)*raise)*6);
  MthlySal = Nslry/12;
  
  cout <<"Your new annual salary is "<< Nslry << " dollars" <<endl;
  cout <<"Your new monthly salary is "<< MthlySal << " dollars" << endl;
  
  
   
    return 0;
}

