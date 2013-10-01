//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <climits>



#define ZERO 0



int StoneToLb(int sts);



int main()
{
    using namespace std;
    
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    
    cout << "chest = " << dec << chest << endl;
    cout << "waist = " << hex << waist << endl;
    cout << "inseam = " << oct << inseam << endl;
    
    return 0;
}



int StoneToLb(int sts)
{
    return 14 * sts;
}