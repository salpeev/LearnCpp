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
    
    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    cout << 9 / 5 << endl;
    cout << 9.0 / 5.0 << endl;
    cout << 9.0 / 5 << endl;
    
    cout << 1e7 / 9.0 << endl;
    cout << 1e7f / 9.0f << endl;
    
    return 0;
}