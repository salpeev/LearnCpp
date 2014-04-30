//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



const int Fave = 27;



int main() {
    using namespace std;
    
    cout << "Enter a number in the range 1-100 to find my favorite number: ";
    
    int n;
    do {
        cin >> n;
        if (n < Fave) {
            cout << "Too low." << endl;
        } else if (n > Fave) {
            cout << "Too high." << endl;
        } else {
            cout << Fave << " is right!" << endl;
        }
    } while (n != Fave);
    
    return 0;
}