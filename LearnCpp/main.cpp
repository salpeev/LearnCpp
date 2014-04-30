//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



const char *qualify[4] = {
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "master canoe jousting.\n",
    "pie-throwing festival.\n"
};



int main() {
    using namespace std;
    
    cout << "Enter your age in years: ";
    
    int age;
    cin >> age;
    
    int index;
    
    if (age > 17 && age < 35) {
        index = 0;
    } else if (age >= 35 && age < 50) {
        index = 1;
    } else if (age >= 50 && age <65) {
        index = 2;
    } else {
        index = 3;
    }
    
    cout << "You qualify for the " << qualify[index] << endl;
    
    return 0;
}