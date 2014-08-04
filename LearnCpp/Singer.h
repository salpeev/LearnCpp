//
//  Singer.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/4/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef SINGER_H_
#define SINGER_H_

#include "Worker.h"


class Singer: public Worker {
public:
    Singer(): Worker(), voice(other) {}
    Singer(const std::string &s, long n, int v = other): Worker(s, n), voice(v) {}
    Singer(const Worker &wk, int v = other): Worker(wk), voice(v) {}
    
    void Set();
    void Show() const;
    
protected:
    enum {
        other,
        alto,
        contralto,
        soprano,
        bass,
        baritone,
        tenor
    };
    
    enum {
        Vtypes = 7
    };
    
private:
    static const char *pv[Vtypes];
    int voice;
};

#endif
