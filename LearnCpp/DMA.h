//
//  DMA.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/18/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef DMA_H_
#define DMA_H_

#include <iostream>



class BaseDMA {
public:
    BaseDMA(const char *l = "null", int r = 0);
    BaseDMA(const BaseDMA &rs);
    virtual ~BaseDMA();
    
    BaseDMA & operator=(const BaseDMA &rs);
    friend std::ostream & operator<<(std::ostream &os, const BaseDMA &rs);
    
private:
    char *label;
    int rating;
};



class LacksDMA: public BaseDMA {
public:
    LacksDMA(const char *c = "blank", const char *l = "null", int r = 0);
    LacksDMA(const char *c, const BaseDMA &rs);
    
    friend std::ostream & operator<<(std::ostream &os, const LacksDMA &rs);
    
private:
    enum {COL_LEN = 40};
    char color[COL_LEN];
};



class HasDMA: public BaseDMA {
public:
    HasDMA(const char *s = "none", const char *l = "null", int r = 0);
    HasDMA(const char *s, const BaseDMA &rs);
    HasDMA(const HasDMA &rs);
    ~HasDMA();
    
    HasDMA & operator=(const HasDMA &rs);
    friend std::ostream & operator<<(std::ostream &os, const HasDMA &rs);
    
private:
    char *style;
};

#endif
