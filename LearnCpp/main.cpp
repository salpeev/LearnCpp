//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



void Simon(int n);



int main()
{
    using namespace std;
    
    int n;
    cout << "Pick an integer: ";
    cin >> n;
    
    Simon(n);
    
    return 0;
}



void Simon(int n)
{
    using namespace std;
    
    cout << "Simon says touch you toes " << n << " times" << endl;
}