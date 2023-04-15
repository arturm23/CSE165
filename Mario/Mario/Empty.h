//
//  Empty.h
//  Mario
//
//  Created by Artur Musayelyan on 4/8/23.
//

#ifndef Empty_h
#define Empty_h

#include <iostream>
#include "Tile.h"

using namespace std;

class Empty : public Tile{
public:
    
    void draw(){};
    void move(){};
};


#endif /* Empty_h */
