//
//  Pair.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/6/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef PAIR_H_
#define PAIR_H_



template <typename T1, typename T2>
class Pair {
public:
    Pair() {}
    Pair(const T1 &aval, const T2 &bval): a(aval), b(bval) {}
    
    T1 & first();
    T2 & second();
    
    T1 first() const {return a;}
    T2 second() const {return b;}
    
private:
    T1 a;
    T2 b;
};



template <typename T1, typename T2>
T1 & Pair<T1, T2>::first() {
    return a;
}

template <typename T1, typename T2>
T2 & Pair<T1, T2>::second() {
    return b;
}

#endif