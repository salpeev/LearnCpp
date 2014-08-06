//
//  Crab.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/6/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef CRAB_H_
#define CRAB_H_

template <template <typename T> class Thing>
class Crab {
public:
    Crab() {}
    
    bool push(int a, double x) {return s1.push(a) && s2.push(x);}
    bool pop(int &a, double &x) {return s1.pop(a) && s2.pop(x);}
    
private:
    Thing<int> s1;
    Thing<double> s2;
};

#endif
