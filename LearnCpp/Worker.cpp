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

void Worker::Data() const {
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << workerId << endl;
}

void Worker::Get() {
    getline(cin, fullname);
    cout << "Enter worker's ID: ";
    cin >> workerId;
    while (cin.get() != '\n') {
        continue;
    }
}
