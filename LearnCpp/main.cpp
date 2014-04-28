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
    
    for (int j = 0, i = (int)word.size() - 1; j < i; i--, j++) {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    
    cout << "Reverse: " << word << endl;
    
    return 0;
}