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
    
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    
    int yamcosts[3] = {20, 30, 5};
    
    cout << "Yams: " << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " costs " << yamcosts[1] << " cents per yam." << endl;
    
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
    cout << "Total: " << total << endl;
    
    cout << "Array size: " << sizeof(yams) << endl;
    cout << "Element size: " << sizeof(yams[0]) << endl;
    
    return 0;
}