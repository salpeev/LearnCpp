//
//  mytime.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/22/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef MYTIME_H_
#define MYTIME_H_



class Time {
public:
    Time();
    Time(int h, int m = 0);
    
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time &t) const;
    void Show() const;
    
private:
    int hours;
    int minutes;
};



#endif
