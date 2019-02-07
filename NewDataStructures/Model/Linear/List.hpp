//
//  List.hpp
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 2/7/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <iostream>
#include "../Nodes/LinearNode.hpp"

class List
{
protected:
        int size;
public:
    //List operations
    virtual void add(type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
}
#endif /* List_hpp */
