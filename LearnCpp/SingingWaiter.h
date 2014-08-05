//
//  SingingWaiter.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/4/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef SINGING_WAITER_H_
#define SINGING_WAITER_H_

#include "Singer.h"
#include "Waiter.h"



class SingingWaiter: public Singer, public Waiter {
public:
    SingingWaiter() {}
    SingingWaiter(const std::string &s, long n, int p = 0, int v = other): Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
    SingingWaiter(const Worker &wk, int p = 0, int v = other): Worker(wk), Waiter(wk), Singer(wk, v) {}
    SingingWaiter(const Waiter &wt, int v = other): Worker(wt), Waiter(wt), Singer(wt, v) {}
    SingingWaiter(const Singer &wt, int p = 0): Worker(wt), Waiter(wt, p), Singer(wt) {}
    
    void Set();
    void Show() const;
    
protected:
    void Data() const;
    void Get();
};

#endif
