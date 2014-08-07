//
//  Remote.h
//  LearnCpp
//
//  Created by Sergey Alpeev on 8/7/14.
//  Copyright (c) 2014 Sergey Alpeev. All rights reserved.
//

#ifndef REMOTE_H_
#define REMOTE_H_

class Tv;



class Remote {
public:
    enum State {Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};
    
    Remote(int m = TV): mode(m) {}
    
    bool volup(Tv &t);
    bool voldown(Tv &t);
    void onoff(Tv &t);
    void chanup(Tv &t);
    void chandown(Tv &t);
    void set_chan(Tv &t, int c);
    void set_mode(Tv &t);
    void set_input(Tv &t);
    
private:
    int mode;
};

#endif
