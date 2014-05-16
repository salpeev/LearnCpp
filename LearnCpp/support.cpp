//
//  support.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/16/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



extern double warming;



void update(double dt);
void local();



void update(double dt) {
    // Optional redeclaration
    extern double warming;
    
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees.\n";
}

void local() {
    double warming = 0.8;
    
    cout << "Local warming = " << warming << " degrees.\n";
    cout << "But global warming = " << ::warming << " degrees.\n";   // Access global variable with the scope resolution operator
}