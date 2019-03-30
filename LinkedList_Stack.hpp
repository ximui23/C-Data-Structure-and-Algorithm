//
//  LinkedList_Stack.hpp
//  CIS17C_Assignment1_part3
//
//  Created by Mai Tuyet Luu on 3/23/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#ifndef LinkedList_Stack_hpp
#define LinkedList_Stack_hpp

#include <stdio.h>


#endif /* LinkedList_Stack_hpp */

class LinkedList_Stack{
    
private:
    struct Node *head = nullptr;
    int top = -1;
    int size = 1000;
    
public:
    void push(int x);
    void print();
    int pop();
    int findMin();
    void deleteMin();
};

struct Node
{
    int data;
    Node* next;
    
};
