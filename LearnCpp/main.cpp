//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int StoneToLb(int sts);



int main()
{
    using namespace std;
    
    int stone;
    cout << "Enter the weibht in stone: ";
    cin >> stone;
    
    int pounds = StoneToLb(stone);
    
    cout << stone << " stone = " << pounds << endl;
    
    return 0;
}



int StoneToLb(int sts)
{
    return 14 * sts;
}