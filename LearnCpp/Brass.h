//
//  Brass.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/15/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef BRASS_H_
#define BRASS_H_

#include <string>



class Brass {
public:
    Brass(const std::string &s = "Nullbody", long an = -1, double bal = 0.0);
    virtual ~Brass() {}
    
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    
    
private:
    std::string fullName;
    long acctNum;
    double balance;
};



class BrassPlus: public Brass {
public:
    BrassPlus(const std::string &s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500.0, double r = 0.11125);
    BrassPlus(const Brass &ba, double ml = 500.0, double r = 0.11125);
    
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) {maxLoan = m;}
    void Resetrate(double r) {rate = r;}
    void ResetOwes() {owesBank = 0.0;}
    
private:
    double maxLoan;
    double rate;
    double owesBank;
};

#endif
