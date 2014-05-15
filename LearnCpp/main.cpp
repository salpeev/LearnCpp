//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



int main() {
    int a = 4;
    int b = 5;
    
    decltype(a) x = 3;
    cout << x << endl;
    
    decltype((a)) y = b;
    cout << y << endl;
    y = 7;
    cout << b << endl;
    
    return 0;
}

