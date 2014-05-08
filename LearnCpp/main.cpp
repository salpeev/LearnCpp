//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>



void simple();



int main() {
    using namespace std;
    
    cout << "main() will call the simple() function.\n";
    simple();
    cout << "main() is finished with the simple().\n";
    
    return 0;
}



void simple() {
    using namespace std;
    cout << "I'm but a simple function.\n";
}