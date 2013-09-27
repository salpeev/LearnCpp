//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <cmath>


int main()
{
    using namespace std;
    
    double area;
    cout << "Enter the floor area, in the square feet, of your home: ";
    cin >> area;
    
    double side = sqrt(area);
    cout << "That's the equivalent of the square " << side << " feet to the side" << endl;
    cout << "How fascinating!" << endl;
    
    return 0;
}
