//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    cout << arr[1] << endl;
    cout << arr + 1 << endl;
    cout << *(arr + 1) << endl;
    
    cout << arr[1][2] << endl;
    cout << *(*(arr + 1) + 2) << endl;
    
    return 0;
}