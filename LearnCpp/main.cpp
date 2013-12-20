//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main()
{
    using namespace std;
    
    const int Lbs_per_stn = 14;
    
    int lbs;
    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    
    int stone = lbs / Lbs_per_stn;
    int punds = lbs % Lbs_per_stn;
    
    cout << "Stone " << stone << ", pounds: " << punds << endl;
    
    return 0;
}