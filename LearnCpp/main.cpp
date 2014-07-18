//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>
#include "DMA.h"

using namespace std;



int main(void) {
    using std::cout;
    using std::endl;
    
    BaseDMA shirt("Portabelly", 8);
    LacksDMA balloon("Red", "Blimpo", 4);
    HasDMA map("Mercator", "Buffalo Keys", 5);
    
    cout << "Displaying BaseDMA object:\n";
    cout << shirt << endl;
    
    cout << "Displaying LacksDMA object:\n";
    cout << balloon << endl;
    
    cout << "Displaying HasDMA object:\n";
    cout << map << endl;
    
    LacksDMA balloon2(balloon);
    cout << "Result of LacksDMA copy:\n";
    cout << balloon2 << endl;
    
    HasDMA map2;
    map2 = map;
    cout << "Result of HasDMA assignment:\n";
    cout << map2 << endl;
    
    return 0;
}
