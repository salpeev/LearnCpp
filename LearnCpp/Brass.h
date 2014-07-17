//
//  Brass.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/15/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef BRASS_H_
#define BRASS_H_

#include "AcctABC.h"



class Brass: public AcctABC {
public:
    Brass(const std::string &s = "Nullbody", long an = -1, double bal = 0.0);
    virtual ~Brass() {}
    
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
};



class BrassPlus: public AcctABC {
public:
    BrassPlus(const std::string &s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500.0, double r = 0.11125);
    BrassPlus(const Brass &ba, double ml = 500.0, double r = 0.11125);
    
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) {maxLoan = m;}
    void ResetRate(double r) {rate = r;}
    void ResetOwes() {owesBank = 0.0;}
    
private:
    double maxLoan;
    double rate;
    double owesBank;
};

#endif
