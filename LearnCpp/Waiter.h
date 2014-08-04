//
//  Waiter.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/4/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef WAITER_H_
#define WAITER_H_

#include "Worker.h"



class Waiter: public Worker {
public:
    Waiter(): Worker(), panache(0) {}
    Waiter(const std::string &s, long n, int p = 0): Worker(s, n), panache(p) {}
    Waiter(const Worker &wk, int p = 0): Worker(wk), panache(p) {}
    
    void Set();
    void Show() const;
    
private:
    int panache;
};

#endif
