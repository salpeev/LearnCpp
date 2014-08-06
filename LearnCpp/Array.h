//
//  Array.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/6/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>
#include <cstdlib>



template <class T, int n>
class Array {
public:
    Array() {}
    explicit Array(const T &v);
    
    virtual T & operator[](int i);
    virtual T operator[](int i) const;
    
private:
    T ar[n];
};



template <class T, int n>
Array<T, n>::Array(const T &v) {
    for (int i = 0; i < n; i++) {
        ar[i] = v;
    }
}

template <class T, int n>
T & Array<T, n>::operator[](int i) {
    if (i < 0 || i >= n) {
        std::cerr << "Error in array limits: " << i << " is out of range\n";
        std::exit(EXIT_FAILURE);
    }
    
    return ar[i];
}

template <class T, int n>
T Array<T, n>::operator[](int i) const {
    if (i < 0 || i >= n) {
        std::cerr << "Error in array limits: " << i << " is out of range\n";
        std::exit(EXIT_FAILURE);
    }
    
    return ar[i];
}

#endif
