//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



enum {
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    indigo
};



int main() {
    using namespace std;
    
    cout << "Enter color code (0 - 6): ";
    int code;
    cin >> code;
    
    while (code >= red && code <= indigo) {
        switch (code) {
            case red: cout << "red" << endl; break;
            case orange: cout << "orange" << endl; break;
            case yellow: cout << "yellow" << endl; break;
            case green: cout << "green" << endl; break;
            case blue: cout << "blue" << endl; break;
            case violet: cout << "violet" << endl; break;
            case indigo: cout << "indigo" << endl; break;
        }
        
        cout << "Enter color code (0 - 6): ";
        cin >> code;
    }
    
    cout << "Bye!\n";
    
    return 0;
}
