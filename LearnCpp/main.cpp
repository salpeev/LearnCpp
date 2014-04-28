//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include <string>



int main() {
    using namespace std;
    
    cout << "Enter a word: ";
    string word;
    cin >> word;
    
    for (int i = int(word.size() - 1); i >= 0; i--) {
        cout << word[i] << endl;
    }
    
    return 0;
}