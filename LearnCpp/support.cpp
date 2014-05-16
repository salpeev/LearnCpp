//
//  support.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/16/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



extern int tom;
static int dick = 10;
int harry = 200;



void remote_access() {
    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry\n";
}