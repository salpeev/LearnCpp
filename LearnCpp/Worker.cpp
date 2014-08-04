//
//  Worker.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/4/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "Worker.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;



Worker::~Worker() {
    
}

void Worker::Set() {
    cout << "Enter workers name: ";
    getline(cin, fullname);
    cout << "Enter workers id: ";
    cin >> workerId;
    
    while (cin.get() != '\n') {
        continue;
    }
}

void Worker::Show() const {
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << workerId << endl;
}
