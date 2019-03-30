//
//  SortedLinkedList.hpp
//  CIS 17C Assignment1_Part2
//
//  Created by Mai Tuyet Luu on 3/22/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#ifndef SortedLinkedList_hpp
#define SortedLinkedList_hpp

#include <stdio.h>

#endif /* SortedLinkedList_hpp */

#include <iostream>

using namespace std;

class Linked_List{
    
private:
    struct Node *head = nullptr;
    
public:
    int findlength();
    void print();
    bool isContained(int x);
    void addElement(int x);
    void removeElement(int x);
    void swap(struct Node *x, struct Node *y);
    void Sort();
    
};

struct Node
{
    int data;
    Node* next;
    
};
