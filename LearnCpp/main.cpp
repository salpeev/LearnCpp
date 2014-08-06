//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "Pair.h"



int main(void) {
    using std::cout;
    using std::endl;
    using std::string;
    
    Pair<string, int> ratings[4] = {
        Pair<string, int>("The Purpled Duck", 5),
        Pair<string, int>("Jaquie's Frisco Al Fresco", 4),
        Pair<string, int>("Cafe Soufle", 5),
        Pair<string, int>("Bertie's eats", 3)
    };
    
    int joints = sizeof(ratings) / sizeof(Pair<string, int>);
    
    cout << "Rating:\t Eatery\n";
    for (int i = 0; i < joints; i++) {
        cout << ratings[i].second() << ": " << ratings[i].first() << endl;
    }
    
    cout << "Oops! Revised rating:\n";
    ratings[3].first() = "Bertie's Fab Eats";
    ratings[3].second() = 6;
    cout << ratings[3].second() << ": " << ratings[3].first() << endl;
    
    
    return 0;
}
