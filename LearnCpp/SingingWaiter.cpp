//
//  SingingWaiter.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/4/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "SingingWaiter.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;



void SingingWaiter::Data() const {
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get() {
    Singer::Get();
    Waiter::Get();
}

void SingingWaiter::Set() {
    cout << "Enter singing waiter's name: ";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const {
    cout << "Category: singing waiter\n";
    Worker::Data();
    Data();
}
