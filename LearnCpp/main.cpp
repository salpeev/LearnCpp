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
    
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << "sam: " << sam << "   sue: " << sue << endl;
    
    cout << "Add 1" << endl;
    
    sam = sam + 1;
    sue = sue + 1;
    cout << "sam: " << sam << "   sue: " << sue << endl;
    
    sam = ZERO;
    sue = ZERO;
    cout << "sam: " << sam << "   sue: " << sue << endl;
    
    cout << "Take 1" << endl;
    
    sam = sam - 1;
    sue = sue - 1;
    cout << "sam: " << sam << "   sue: " << sue << endl;
    
    return 0;
}



int StoneToLb(int sts)
{
    return 14 * sts;
}