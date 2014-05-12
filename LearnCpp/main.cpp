//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



int sum(int arr[][4], int size);



int main() {
    int arr1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    cout << sum(arr1, 3) << endl;
    
    return 0;
}



int sum(int arr[][4], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
    }
    
    return sum;
}