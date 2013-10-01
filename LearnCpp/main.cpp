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
    
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    cout << "Character: " << ch << endl;
    
    return 0;
}



int StoneToLb(int sts)
{
    return 14 * sts;
}