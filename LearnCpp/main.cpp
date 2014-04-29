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
    
    int ch;
    int count = 0;
    
    while ((ch = cin.get()) != EOF) {
        cout.put(ch);
        count++;
    }
    
    cout << endl << count << " characters read.\n";
    
    return 0;
}