//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



template <class T>
T lesser(T a, T b) {
    cout << "#1: ";
    return (a < b) ? a : b;
}

int lesser(int a, int b) {
    cout << "#2: ";
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;
    return (a < b) ? a : b;
}



int main() {
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;
    
    cout << lesser(m, n) << endl;
    cout << lesser(x, y) << endl;
    cout << lesser<>(m, n) << endl;
    cout << lesser<int>(x, y) << endl;
    
    return 0;
}

