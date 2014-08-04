//
//  Worker.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/4/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef WORKER_H_
#define WORKER_H_

#include <string>


class Worker {
public:
    Worker(): fullname("no one"), workerId(0L) {}
    Worker(const std::string &s, long n): fullname(s), workerId(n) {}
    virtual ~Worker() = 0;
    
    virtual void Set();
    virtual void Show() const;
    
private:
    std::string fullname;
    long workerId;
};

#endif
