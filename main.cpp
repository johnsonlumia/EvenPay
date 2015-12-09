//
//  main.cpp
//  EvenPay (v1)
//
//  For use of going out with multiple people paying
//
//  Created by Renjie Zhu on 12/1/15.
//  Copyright © 2015 Renjie Zhu. All rights reserved.
//

#include <iostream>
#include <string>
#include "Payer.h"
using namespace std;

// Global constants
const int MAXPARTICIPANT = 10;

/* class definitions
class Payer {
private:
    string m_name;
    int m_payment[MAXPAYMENTNUM];
    
public:
    void giveName(string name);
    string name();
    
    
};

void Payer::giveName(string name) {
    m_name = name;
}

string Payer::name() {
    return m_name;
}
*/

int main() {
    
    cout << "Welcome to EvenPay (v1)" << endl;
    string tempName;
    int count=0;
    Payer parti[MAXPARTICIPANT];
    char c = 'Y';
    for (; count<MAXPARTICIPANT; count++) {
        
        cout << "What is the name? " << endl;
        getline(cin,tempName);
        parti[count].giveName(tempName);
        
        cout << "Create another participant? (Y for yes)" << endl;
        cin >> c;  cin.ignore(10000,'\n');
        if (c != 'Y')  break;
    }
    
    for (int i=0; i<=count; i++) {
        cout << parti[i].name() << endl;
    }
    cout << "Thanks for using!" << endl;
    return 0;
}
