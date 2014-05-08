//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



long double probability(unsigned int numbers, unsigned int picks);



int main() {
    double total, choices;
    
    cout << "Enter the total number of choices on the game card and the number of picks allowed: ";
    
    while ((cin >> total >> choices) && choices <= total) {
        cout << "You have one chance in " << probability(total, choices) << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    
    return 0;
}



long double probability(unsigned int numbers, unsigned int picks) {
    long double result = 1.0;
    long double n;
    unsigned int p;
    
    for (n = numbers, p = picks; p > 0; n--, p--) {
        result = result * n / p;
    }
    
    return result;
}