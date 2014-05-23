//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"



int main(void) {
    using namespace std;
    using VECTOR::Vector;
    
    srand((unsigned int)time(0));
    
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    
    cout << "Enter target distance (q to quit): ";
    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep)) {
            break;
        }
        
        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        
        cout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        
        cout << "Average outvard distance per step = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    
    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }
    
    return 0;
}
