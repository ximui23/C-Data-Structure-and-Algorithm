//
//  LinkedList_Stack.cpp
//  CIS17C_Assignment1_part3
//
//  Created by Mai Tuyet Luu on 3/23/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#include "LinkedList_Stack.hpp"
#include <iostream>
using namespace std;

void LinkedList_Stack::push(int x)
{
    if(top > -1 || top < size)
    {
        
        Node *n = new Node;
        n->data = x;
        n->next = head;
        head = n;
        cout << "Push: " << x << endl;
    }
    else
    {
        cout << "Stack overflows." << endl;
    }
    
}
void LinkedList_Stack::print()
{
    
    struct Node* cur = head;
    
    cout << "The stack is: " << endl;
    
    while (cur != NULL) {
        cout << " " << cur->data << endl;
        cur = cur->next;
    }
}

int LinkedList_Stack::pop()
{
    if(top == -1)
    {
        cout << "Stack is empty. " << endl;
    }
    else
    {
        cout << "Pop: " << head->data << endl;
        head = head->next;
        
    }
    return 0;
}

int LinkedList_Stack::findMin()
{
    int min = head->data;
    
    while (head != NULL)
    {
        if(head->data < min)
        {
            min = head->data;
        }
        
        head = head->next;
        
    }
    
    return min;
}

//void LinkedList_Stack::deleteMin()
//{
//    Node *current = head;
//    Node *traverse = current;
//    
//    int x = findMin();
//    if(head->data == x)
//    {
//        head = head->next;
//        delete current;
//        cout << x << "is removing. " << endl;
//    }
//    while(current != NULL && current->data != findMin())
//    {
//        traverse = current;
//        current = current->next;
//    }
//    if(current == NULL) return;
//    
//    traverse->next = current->next;
//}
