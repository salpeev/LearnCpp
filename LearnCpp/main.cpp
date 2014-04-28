//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <string>



int main() {
    using namespace std;
    
    cout << "The Amazing Accounto will sum and average five numbers for you." << endl;
    cout << "Please enter five values:" << endl;
    
    double number = 0.0;
    double sum = 0.0;
    
    for (int i = 1; i <= 5; i++) {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / 5 << endl;
    
    return 0;
}