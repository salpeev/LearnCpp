//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <string>



int main()
{
    using namespace std;
    
    string s1 = "penguin";
    string s2;
    string s3;
    
    s2 = s1;
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << endl;
    
    s2 = "bussard";
    cout << "s2: " << s2 << endl;
    cout << endl;
    
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << endl;
    
    s1 += s2;
    cout << "s1: " << s1 << endl;
    cout << endl;
    
    s2 += " for a day";
    cout << "s2: " << s2 << endl;
    cout << endl;
    
    return 0;
}