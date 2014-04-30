//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <climits>



bool is_int(double num);



int main() {
    using namespace std;
    
    cout << "Enter an integer value: ";
    double num;
    cin >> num;
    
    while (!is_int(num)) {
        cout << "Out of range. Please try again: ";
        cin >> num;
    }
    
    int val = int(num);
    cout << "You have entered the integer: " << val << endl;
    
    return 0;
}



bool is_int(double num) {
    if (INT_MIN <= num && num <= INT_MAX) {
        return true;
    } else {
        return false;
    }
}