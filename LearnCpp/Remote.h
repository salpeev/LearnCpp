//
//  Remote.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/7/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef REMOTE_H_
#define REMOTE_H_

#include "Tv.h"



class Remote {
public:
    Remote(int m = Tv::TV): mode(m) {}
    
    bool volup(Tv &t) {return t.volup();}
    bool voldown(Tv &t) {return t.voldown();}
    void onoff(Tv &t) {t.onoff();}
    void chanup(Tv &t) {t.chanup();}
    void chandown(Tv &t) {t.chandown();}
    void set_chan(Tv &t, int c) {t.channel = c;}
    void set_mode(Tv &t) {t.set_mode();}
    void set_input(Tv &t) {t.set_input();}
    
private:
    int mode;
};

#endif
