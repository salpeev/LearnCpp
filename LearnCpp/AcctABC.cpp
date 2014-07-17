//
//  AcctABC.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/17/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "AcctABC.h"

using std::cout;
using std::ios_base;
using std::endl;
using std::string;



AcctABC::AcctABC(const std::string &s, long an, double bal) {
    fullName = s;
    acctNum = an;
    balance = bal;
}

void AcctABC::Deposit(double amt) {
    if (amt < 0) {
        cout << "Negative deposit not allowed; deposit is canceled.\n";
    } else {
        balance += amt;
    }
}

void AcctABC::Withdraw(double amt) {
    balance -= amt;
}

AcctABC::Formatting AcctABC::SetFormat() const {
    Formatting f;
    f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void AcctABC::Restore(AcctABC::Formatting &f) const {
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}
