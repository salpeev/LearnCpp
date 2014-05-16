//
//  coordin.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/16/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef COORDIN_H_
#define COORDIN_H_



struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};



polar rect_to_polar(rect xypos);
void show_polar(polar dapos);



#endif