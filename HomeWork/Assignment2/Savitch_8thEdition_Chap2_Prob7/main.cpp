/* 
 * File: Chap2 Problem 7
 * Author: Bank Conway
 * Created on July 1, 2014, 3:37 PM
 */

//System Library
#include<iostream>
using namespace std;

//User Library

//

//Execution begins Here!
int main(int argc, char** argv) {
    
    const float Nrate = 16.78, FedTx =0.14,
    StteTax =0.05, SST = 0.06, Orate=25.17; 
    short Nhours, Ohours, FmlyDe;
    float NorTmPa, OvrTmPa, TtlPa, TotAftrDduc, AmtDduc;
    
    cout <<"Please enter the amount of hours you work per week.\n";
    cin >> Nhours;
    cout <<"Please enter number of hours you work OVER TIME per week.\n";
    cin >> Ohours;
    
    
    NorTmPa = Nhours * Nrate;
    OvrTmPa = Ohours * Orate;
    TtlPa = NorTmPa + OvrTmPa;
    cout <<"How many dependent family members do you have?\n";
    cin >> FmlyDe;
    
    if(FmlyDe >= 3)
    { 
        AmtDduc = (TtlPa*FedTx)+(TtlPa*StteTax)+(TtlPa*SST)+(35);
        TotAftrDduc = TtlPa-AmtDduc;
        cout << "You earn "<< TtlPa << " dollars.\n";
        cout << "But Tax taken out " << AmtDduc << " dollar.\n";
        cout << "So you only take home "<< TotAftrDduc<< " dollars.\n";
        cout <<"Sneaky government eh?\n";
            
    }
    else
    {
        AmtDduc = (TtlPa*FedTx)+(TtlPa*StteTax)+(TtlPa*SST);
        TotAftrDduc = TtlPa-AmtDduc;
        cout << "You earn "<< TtlPa << " dollars.\n";
        cout << "But Tax taken out " << AmtDduc << " dollar.\n";
        cout << "So you only take home "<< TotAftrDduc<< " dollars.\n";
        cout <<"Sneaky government eh?\n";
             
    }
    return 0;
}

