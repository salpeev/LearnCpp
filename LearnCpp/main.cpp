//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



void test(double &&r);



int main() {
    test(10 + 5);
    
    return 0;
}



void test(double &&r) {
    r = 10;
}