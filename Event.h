//
//  Event.h
//  EvenPay
//
//  Created by Renjie Zhu on 12/9/15.
//  Copyright © 2015 Renjie Zhu. All rights reserved.
//

#ifndef Event_h
#define Event_h

#include <iostream>
#include <string>
#include "Payer.h"

using namespace std;

// class clasification
class Event {
    
    double m_amount;
   // Payer* m_payer;

    
public:
    double amount();
};

double Event::amount() {
    return m_amount;
}

#endif /* Event_h */
