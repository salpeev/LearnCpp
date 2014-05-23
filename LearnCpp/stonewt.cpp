//
//  stonewt.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/23/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "stonewt.h"
#include <iostream>

using namespace std;



Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
}

Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::~Stonewt() {
    
}

void Stonewt::show_lbs() const {
    cout << pounds << " punds\n";
}

void Stonewt::show_stn() const {
    cout << stone << " stone, " << pds_left << " pounds\n";
}
