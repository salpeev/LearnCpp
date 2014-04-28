//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



int main() {
    using namespace std;
    
    int x;
    
    cout << "The expression x = 100 has the value " << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value " << (x < 3) << endl;
    cout << "The expression x > 3 has the value " << (x > 3) << endl;
    
    cout.setf(ios_base::boolalpha);
    
    cout << "The expression x < 3 has the value " << (x < 3) << endl;
    cout << "The expression x > 3 has the value " << (x > 3) << endl;
    
    return 0;
}