//
//  Deque.hpp
//  CIS 17C Assignment1_Part4
//
//  Created by Mai Tuyet Luu on 3/25/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#ifndef Deque_hpp
#define Deque_hpp

#include <stdio.h>

#endif /* Deque_hpp */

class Deque
{
    
    int array[100];
    int head;
    int tail;
    int size;
    
public:
    Deque(int size)
    {
        head = -1;
        tail = 0;
        this->size = size;
    }
    
    void push(int x);
    void pop();
    void inject(int x);
    void eject();
    
};
