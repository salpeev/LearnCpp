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
    
    int year;
    cout << "Enter a year: ";
    (cin >> year).get();
    
    char address[80];
    cout << "Enter an address: ";
    cin.getline(address, 80);
    
    cout << "Year: " << year << "\taddress: " << address << endl;
    
    return 0;
}