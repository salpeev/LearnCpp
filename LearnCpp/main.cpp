//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main() {
    using namespace std;
    
    double prices[] = {4.99, 10.99, 6.87, 7.99, 8.49};
    
    for (double x : prices) {
        cout << x << endl;
    }
    
    for (double &x : prices) {
        x += 1.0;
    }
    
    cout << "**********" << endl;
    
    for (double x : prices) {
        cout << x << endl;
    }
    
    return 0;
}