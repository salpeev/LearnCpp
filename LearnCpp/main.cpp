//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <ctime>



int main() {
    using namespace std;
    
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    
    clock_t delay = secs * CLOCKS_PER_SEC;
    
    cout << "START" << endl;
    clock_t start = clock();
    while (clock() - start < delay) {
        // Wait
    }
    cout << "END" << endl;
    
    return 0;
}