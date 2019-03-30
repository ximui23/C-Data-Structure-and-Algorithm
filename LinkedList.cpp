//
//  LinkedList.cpp
//  CIS17C_Assignment1
//
//  Created by Mai Tuyet Luu on 3/22/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#include "LinkedList.hpp"
#include <iostream>
using namespace std;

int Linked_List::findlength()//struct Node* head)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
        
    }
    return length;
}

void Linked_List::print()//struct Node* head)
{
    
    struct Node* cur = head;
    
    cout << "The linked list is: ";
    while (cur != NULL) {
        cout << " " << cur->data ;
        cur = cur->next;
        //cout << endl;
    }
    
}

bool Linked_List::isContained(int x)
{
    Node *temp = head;
    while(temp != NULL)
    {
        if(temp->data == x)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void Linked_List::addElement(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Linked_List::removeElement(int x)
{
    Node *current = head;
    Node *traverse = current;
    
    if(head->data == x)
    {
        head = head->next;
        delete current;
        cout <<  x << " is removing " << endl;
    }
    while (current != NULL && current->data != x){
        traverse = current;
        current = current->next;
    }
    if(current == NULL) return;
    
    traverse->next = current->next;
    
}
