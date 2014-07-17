//
//  AcctABC.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/17/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef ACCTABC_H_
#define ACCTABC_H_

#include <iostream>
#include <string>



class AcctABC {
public:
    AcctABC(const std::string &s = "Nullbody", long an = -1, double bal = 0.0);
    virtual ~AcctABC() {}
    
    void Deposit(double amt);
    virtual void Withdraw(double amt) = 0;
    double Balance() const {return balance;}
    virtual void ViewAcct() const = 0;
    
    
protected:
    struct Formatting {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    
    const std::string & FullName() const {return fullName;}
    long AcctNum() const {return acctNum;}
    Formatting SetFormat() const;
    void Restore(Formatting &f) const;
    
private:
    std::string fullName;
    long acctNum;
    double balance;
};

#endif
