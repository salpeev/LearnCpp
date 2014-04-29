//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main() {
    using namespace std;
    
    cout << "Enter numbers in the range 1-10 to find my favorite number." << endl;
    
    int n;
    do {
        cin >> n;
    } while (n != 7);
    
    cout << "Yes, 7 is my favorite number." << endl;
    
    return 0;
}