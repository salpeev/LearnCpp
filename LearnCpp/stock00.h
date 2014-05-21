//
//  stock00.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/20/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>



class Stock {
public:
    Stock();
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock();
    
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock &s) const;
    
private:
    void set_tot() {total_val = shares * share_val;}
    
    std::string company;
    long shares;
    double share_val;
    double total_val;
};

#endif
