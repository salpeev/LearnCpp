//
//  DMA.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 7/18/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#include "DMA.h"
#include <cstring>



BaseDMA::BaseDMA(const char *l, int r) {
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

BaseDMA::BaseDMA(const BaseDMA &rs) {
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}

BaseDMA::~BaseDMA() {
    delete [] label;
}

BaseDMA & BaseDMA::operator=(const BaseDMA &rs) {
    if (this == &rs) {
        return *this;
    }
    
    delete [] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    
    return *this;
}

std::ostream & operator<<(std::ostream &os, const BaseDMA &rs) {
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}



LacksDMA::LacksDMA(const char *c, const char *l, int r): BaseDMA(l, r) {
    strncpy(color, c, 39);
    color[39] = '\0';
}

LacksDMA::LacksDMA(const char *c, const BaseDMA &rs): BaseDMA(rs) {
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

std::ostream & operator<<(std::ostream &os, const LacksDMA &rs) {
    os << (const BaseDMA &)rs;
    os << "Color: " << rs.color << std::endl;
    return os;
}



HasDMA::HasDMA(const char *s, const char *l, int r): BaseDMA(l, r) {
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

HasDMA::HasDMA(const char *s, const BaseDMA &rs): BaseDMA(rs) {
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

HasDMA::HasDMA(const HasDMA &rs): BaseDMA(rs) {
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
}

HasDMA::~HasDMA() {
    delete [] style;
}

HasDMA & HasDMA::operator=(const HasDMA &rs) {
    if (this == &rs) {
        return *this;
    }
    
    BaseDMA::operator=(rs);
    delete [] style;
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
    
    return *this;
}

std::ostream & operator<<(std::ostream &os, const HasDMA &rs) {
    os << (const BaseDMA &)rs;
    os << "Style: " << rs.style << std::endl;
    return os;
}






