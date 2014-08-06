//
//  Beta.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/6/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef BETA_H_
#define BETA_H_

#include <iostream>

using std::cout;
using std::endl;



template <typename T>
class Beta {
public:
    Beta(T t, int i): q(t), n(i) {}
    
    template <typename U>
    U blab(U u, T t) {return (n.Value() * q.Value()) * u / t;}
    void Show() const {q.Show(); n.Show();}
    
private:
    template <typename V>
    class Hold {
    public:
        Hold(V v = 0): val(v) {}
        
        void Show() const {cout << val << endl;}
        V Value() const {return val;}
        
    private:
        V val;
    };
    
    Hold<T> q;
    Hold<int> n;
};

#endif
