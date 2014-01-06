//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



struct inflatable
{
    char name[20];
    float volume;
    double price;
};



int main()
{
    using namespace std;
    
    inflatable guests[2] =
    {
        {"Bambie", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };
    
    cout << "guests[0] name: " << guests[0].name << endl;
    cout << "guests[0] price: " << guests[0].price << endl;
    cout << endl;
    
    cout << "guests[1] name: " << guests[1].name << endl;
    cout << "guests[1] price: " << guests[1].price << endl;
    
    return 0;
}