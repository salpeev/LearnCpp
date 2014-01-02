//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main()
{
    using namespace std;
    
    const int ArSize = 20;
    
    char name[ArSize];
    char dessert[ArSize];
    
    // Try two words1234
    cout << "Enter a name: ";
    cin.getline(name, ArSize);
    
    cout << "Enter a dessert: ";
    cin.getline(dessert, ArSize);
    
    cout << "Name: " << name << "\tdessert: " << dessert << endl;
    
    return 0;
}