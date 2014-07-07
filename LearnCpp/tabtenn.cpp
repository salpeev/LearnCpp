//
//  tabtenn.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/7/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "tabtenn.h"
#include <iostream>

using namespace std;



TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht): firstname(fn), lastname(ln), hasTable(ht) {
    
}

void TableTennisPlayer::Name() const {
    cout << lastname << ", " << firstname;
}