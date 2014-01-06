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
    
    inflatable par = guest;
    
    cout << "par name: " << par.name << endl;
    cout << "par volume: " << par.volume << endl;
    cout << "par price: " << par.price << endl;
    
    return 0;
}