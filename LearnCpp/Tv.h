//
//  Tv.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/7/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef TV_H_
#define TV_H_

#include "Remote.h"



class Tv {
public:
    friend void Remote::set_chan(Tv &t, int c);
    
    enum State {Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};
    
    Tv(int s = Off, int mc = 150): state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    
    void onoff() {state = (state == On) ? Off : On;}
    bool ison() const {return state == On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() {mode = (mode == Antenna) ? Cable : Antenna;}
    void set_input() {input = (input == TV) ? DVD : TV;}
    void settings() const;
    
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
};

#endif
