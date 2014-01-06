//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



struct torgle_register
{
    unsigned int SN: 4;
    unsigned int: 4;
    bool goodIn: 1;
    bool goodTorgle: 1;
};



int main()
{
    using namespace std;
    
    torgle_register t_register;
    t_register.SN = 15;
    
    cout << "SIZE: " << sizeof(t_register) << endl;
    cout << "SN: " << t_register.SN << endl;
    
    return 0;
}