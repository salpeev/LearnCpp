//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



const int ArSize = 6;



int main() {
    using namespace std;
    
    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) ";
    cout << "of\nyour neighbors. Program terminates ";
    cout << "when you make\n" << ArSize << " entries ";
    cout << "or enter a negative value.\n";
    
    int i = 0;
    float temp;
    
    cout << "First value: ";
    cin >> temp;
    
    while (i < ArSize && temp >= 0) {
        naaq[i] = temp;
        i++;
        if (i < ArSize) {
            cout << "Next value: ";
            cin >> temp;
        }
    }
    
    if (i == 0) {
        cout << "No data, bye.\n";
    } else {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++) {
            if (naaq[j] > you) {
                count++;
            }
        }
        cout << count << " of your neighbors have greater awareness of\n";
        cout << "the New Age than do.\n";
    }
    
    return 0;
}