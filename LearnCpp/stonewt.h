//
//  stonewt.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 5/23/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef STONEWT_H_
#define STONEWT_H_



class Stonewt {
public:
    Stonewt();
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    ~Stonewt();
    
    void show_lbs() const;
    void show_stn() const;
    
private:
    static const int Lbs_per_stn = 14;
    
    int stone;
    double pds_left;
    double pounds;
};

#endif
