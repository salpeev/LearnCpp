//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>



int main() {
    using namespace std;
    
    ifstream fin;
    fin.open("/Users/salpeev/Documents/Projects/LearnCpp/LearnCpp/numbers.txt");
    
    if (!fin.is_open()) {
        cout << "Couldn't open the file. Terminating...\n";
        exit(EXIT_FAILURE);
    }
    
    double value;
    double sum = 0.0;
    int count = 0;
    
    while (fin >> value) {
        count++;
        sum += value;
    }
    
    if (fin.eof()) {
        cout << "End of file reached.\n";
    } else if (fin.fail()) {
        cout << "Input terminated by data mismatch.\n";
    } else {
        cout << "Input terminated by unknown reason.\n";
    }
    
    if (count == 0) {
        cout << "No data processed.\n";
    } else {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    
    fin.close();
    
    return 0;
}
