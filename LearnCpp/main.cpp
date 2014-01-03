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
    
    inflatable guest
    {
        "Glorius Gloria",
        1.88,
        29.99
    };
    
    inflatable par =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };
    
    cout << "guest name: " << guest.name << endl;
    cout << "par name: " << par.name << endl;
    cout << "total price: " << guest.price + par.price << endl;
    
    return 0;
}