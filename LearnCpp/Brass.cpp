//
//  Brass.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/15/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "Brass.h"
#include <iostream>

using namespace std;



Brass::Brass(const string &s, long an, double bal): AcctABC(s, an, bal) {
    
}

void Brass::Withdraw(double amt) {
    if (amt < 0) {
        cout << "Withdraw amount must be positive; withdrawal canceled.\n";
    } else if (amt <= Balance()) {
        AcctABC::Withdraw(amt);
    } else {
        cout << "Withdrawal amount of $" << amt << " exceeds your balance.\n Withdrawal canceled.\n";
    }
}

void Brass::ViewAcct() const {
    Formatting f = SetFormat();
    
    cout << "Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    
    Restore(f);
}



BrassPlus::BrassPlus(const string &s, long an, double bal, double ml, double r): AcctABC(s, an, bal) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r): AcctABC(ba) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const {
    Formatting f = SetFormat();
    
    cout << "BrassPlus Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan rate: " << 100 * rate << "%\n";
    
    Restore(f);
}

void BrassPlus::Withdraw(double amt) {
    Formatting f = SetFormat();
    
    double bal = Balance();
    if (amt <= bal) {
        AcctABC::Withdraw(amt);
    } else if (amt <= bal + maxLoan - owesBank) {
        double advance = amt - bal;
        owesBank += advance * (1.0 * rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        AcctABC::Withdraw(amt);
    } else {
        cout << "Credit limit exceeded. Transaction cancelled.\n";
    }
    
    Restore(f);
}



