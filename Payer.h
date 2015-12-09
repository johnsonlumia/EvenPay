//
//  Payer.h
//  EvenPay
//
//  Created by Renjie Zhu on 12/1/15.
//  Copyright © 2015 Renjie Zhu. All rights reserved.
//

#ifndef Payer_h
#define Payer_h

#include <iostream>
#include <string>
using namespace std;

// Global constants
const int MAXPAYMENTNUM = 10;

// class definitions
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

#endif /* Payer_h */
