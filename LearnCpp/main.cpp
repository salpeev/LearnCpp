//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



inline double square(double x);



int main() {
    double a, b;
    double c = 13;
    
    a = square(5.0);
    b = square(4.5 + 7.5);
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c << ", c squared = " << square(c++) << endl;
    cout << "Now c = " << c << endl;
    
    return 0;
}



inline double square(double x) {
    return x * x;
}