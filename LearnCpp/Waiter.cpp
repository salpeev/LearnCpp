//
//  Waiter.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/4/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "Waiter.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;



void Waiter::Set() {
    Worker::Set();
    
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    
    while (cin.get() != '\n') {
        continue;
    }
}

void Waiter::Show() const {
    cout << "Category: waiter\n";
    Worker::Show();
    cout << "Panache rating: " << panache << endl;
}
