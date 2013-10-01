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
    
    char ch = 'M';
    int i = ch;
    cout << "ASCII for " << ch << " is " << i << endl;
    
    ch = ch + 1;
    i = ch;
    cout << "ASCII for " << ch << " is " << i << endl;
    
    cout.put(ch);
    cout.put('!');
    cout << endl;
    
    return 0;
}



int StoneToLb(int sts)
{
    return 14 * sts;
}