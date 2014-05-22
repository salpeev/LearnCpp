//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "mytime.h"



int main(void) {
    using std::cout;
    using std::endl;
    
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    
    cout << "aida and tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "aida + tosca: " << temp << endl;
    temp = aida * 1.17;
    cout << "aida * 1.17: " << temp << endl;
    cout << "10.0 * tosca: " << 10.0 * tosca << endl;
    
    return 0;
}
