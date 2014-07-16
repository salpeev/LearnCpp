//
//  Brass.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/15/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "Brass.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;



format SetFormat();
void Restore(format f, precis p);



Brass::Brass(const string &s, long an, double bal) {
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt) {
    if (amt < 0) {
        cout << "Negative deposit not allowed; deposit is canceled.\n";
    } else {
        balance += amt;
    }
}

void Brass::Withdraw(double amt) {
    format initialState = SetFormat();
    precis prec = cout.precision(2);
    
    if (amt < 0) {
        cout << "Withdraw amount must be positive; withdrawal canceled.\n";
    } else if (amt <= balance) {
        balance -= amt;
    } else {
        cout << "Withdrawal amount of $" << amt << " exceeds your balance.\n Withdrawal canceled.\n";
    }
    
    Restore(initialState, prec);
}

double Brass::Balance() const {
    return balance;
}

void Brass::ViewAcct() const {
    format initialState = SetFormat();
    precis prec = cout.precision(2);
    
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    
    Restore(initialState, prec);
}



BrassPlus::BrassPlus(const string &s, long an, double bal, double ml, double r): Brass(s, an, bal) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r): Brass(ba) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const {
    format initialState = SetFormat();
    precis prec = cout.precision(2);
    
    Brass::ViewAcct();
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan rate: " << 100 * rate << "%\n";
    
    Restore(initialState, prec);
}

void BrassPlus::Withdraw(double amt) {
    format initialState = SetFormat();
    precis prec = cout.precision(2);
    
    double bal = Balance();
    if (amt <= bal) {
        Brass::Withdraw(amt);
    } else if (amt <= bal + maxLoan - owesBank) {
        double advance = amt - bal;
        owesBank += advance * (1.0 * rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    } else {
        cout << "Credit limit exceeded. Transaction cancelled.\n";
    }
    
    Restore(initialState, prec);
}



format SetFormat() {
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void Restore(format f, precis p) {
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}




