//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



const int ArSize = 20;



int main() {
    using namespace std;
    
    char name[ArSize];
    cout << "Your first name, please: ";
    cin >> name;
    
    int i = 0;
    while (name[i] != '\0') {
        cout << int(name[i]) << endl;
        i++;
    }
    
    return 0;
}