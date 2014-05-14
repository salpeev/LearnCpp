//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



template <typename T>
void Swap(T &a, T &b);



int main() {
    int i = 10;
    int j = 20;
    
    cout << "i, j = " << i << ", " << j << ".\n";
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << ".\n";
    cout << endl;
    
    double x = 24.5;
    double y = 81.7;
    
    cout << "x, y = " << x << ", " << y << ".\n";
    Swap(x, y);
    cout << "Now x, y = " << x << ", " << y << ".\n";
    
    return 0;
}



template <typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}