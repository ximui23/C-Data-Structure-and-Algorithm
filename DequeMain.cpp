//
//  main.cpp
//  CIS 17C Assignment1_Part4
//
//  Created by Mai Tuyet Luu on 3/23/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//
/*
 3.28 A deque is a data structure consisting of a list of items on which the following
 operations are possible:
 push(x): Insert item x on the front end of the deque.
 pop(): Remove the front item from the deque and return it.
 inject(x): Insert item x on the rear end of the deque.
 eject(): Remove the rear item from the deque and return it.
 Write routines to support the deque that take O(1) time per operation.

 */

#include <iostream>
#include "Deque.hpp"

using namespace std;

int main()
{

    Deque queue(5);
    
    queue.push(6);
    queue.push(8);
    queue.push(4);
    queue.push(2);
    queue.inject(9);

    queue.pop();
    queue.push(3);
    
    queue.eject();
    queue.inject(7);
    
    return 0;
}

