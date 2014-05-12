//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



void countdown(int n);



int main() {
    countdown(4);
    
    return 0;
}



void countdown(int n) {
    cout << "Counting down... " << n << endl;
    
    if (n > 0) {
        countdown(n - 1);
    }
    
    cout << n << ": Kaboom!\n";
}