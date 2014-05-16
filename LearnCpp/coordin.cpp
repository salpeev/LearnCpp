//
//  coordin.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/16/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "coordin.h"
#include <iostream>
#include <cmath>

using namespace std;



polar rect_to_polar(rect xypos) {
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

void show_polar(polar dapos) {
    double radInDegree = 180.0 / M_PI;
    cout << "distance = " << dapos.distance << ", angle = " << dapos.angle * radInDegree << " degrees.\n";
}