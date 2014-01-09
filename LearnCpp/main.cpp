//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <cstring>



struct inflatable
{
    char name[20];
    float volume;
    double price;
};



int main()
{
    using namespace std;
    
    inflatable *ps = new inflatable;
    
    cout << "Enter inflatable name: ";
    cin.get(ps->name, 20);
    
    cout << "Enter inflatable volume: ";
    cin >> (*ps).volume;
    
    cout << "Enter inflatable price: ";
    cin >> ps->price;
    
    cout << endl;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << endl;
    cout << "Price: " << ps->price << endl;
    
    return 0;
}