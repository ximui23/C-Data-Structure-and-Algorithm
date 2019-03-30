//
//  LinkedList.hpp
//  CIS17C_Assignment1
//
//  Created by Mai Tuyet Luu on 3/22/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

#endif /* LinkedList_hpp */

class Linked_List{
    
private:
    struct Node *head = nullptr;
public:
    int findlength();
    void print();
    bool isContained(int x);
    void addElement(int x);
    void removeElement(int x);
};


struct Node
{
    int data;
    Node* next;
    
};
