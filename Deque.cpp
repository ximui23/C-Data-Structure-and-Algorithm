//
//  Deque.cpp
//  CIS 17C Assignment1_Part4
//
//  Created by Mai Tuyet Luu on 3/25/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#include "Deque.hpp"
#include <iostream>

using namespace std;

void Deque::push(int x)
{
    if((head == 0 && tail == size - 1) || (head == tail + 1))
    {
        cout << "Overflow. " << endl;
        return;
    }
    
    if (head == -1)
    {
        head = 0;
        tail = 0;
    }
    else if(head == 0)
    {
        head = size - 1;
    }
    else
    {
        tail = tail + 1;
        array[tail] = x;
        cout << x << " is being pushed." << endl;
    }
}

void Deque::inject(int x)
{
    if((head == 0 && tail == size - 1) || (head == tail + 1))
    {
        cout << "Overflow. " << endl;
        return;
    }
    
    if (head == -1)
    {
        head = 0;
        tail = 0;
    }
   
    else if(tail == size - 1)
    {
        tail = 0;
    }
    
    else
    {
        head = head - 1;
        array[head] = x;
        cout << x << " is injected at the rear end." << endl;
    
    }
}

void Deque::pop()
{
    if(head == -1)
    {
        cout << "The queue is empty. " << endl;
        return;
    }
    
    if(head == tail)
    {
        head = -1;
        tail = -1;
    }
    else
    {
        if(head == size - 1)
        {
            head = 0;
        }
        else{
            head = head + 1;
        }
        cout << "Pop from the front end." << endl;
    }
}

void Deque::eject()
{
    if(head == -1)
    {
        cout << "The queue is empty. " << endl;
        return;
    }
    
    if(head == tail)
    {
        head = -1;
        tail = -1;
    }
    else if (tail == 0)
    {
        tail = size - 1;
    }
    else{
        tail = tail - 1;
    }
    cout << "Eject from the rear end. " << endl;
}

