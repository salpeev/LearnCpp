//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



int main() {
    int rats = 101;
    int &rodents = rats;
    
    cout << "rats = " << rats << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats << ", rodents address = " << &rodents << endl;
    
    int bunnies = 50;
    rodents = bunnies;
    
    cout << "bunnies = " << bunnies << ", rats = " << rats << ", rodents = " << rodents << endl;
    cout << "bunnies address = " << &bunnies << ", rodents address = " << &rodents << endl;
    
    return 0;
}