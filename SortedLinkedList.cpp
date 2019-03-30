//
//  SortedLinkedList.cpp
//  CIS 17C Assignment1_Part2
//
//  Created by Mai Tuyet Luu on 3/22/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#include "SortedLinkedList.hpp"

int Linked_List::findlength()
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

void Linked_List::print()
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

void Linked_List::swap(struct Node *x, struct Node *y)
{
    //Create temp to store data of x
    int temp = x->data;
    //Assign data of y onto data of x
    x->data = y->data;
    //Take original data of x from temp and assign into y->data
    y->data = temp;
    //Finish swapping data of x and y
}

void Linked_List::Sort()
{
    int swapped;
    Node *ptr1;
    Node *ptr2 = NULL;

    if(head == NULL)
    {
        return;
    }
    do{
        swapped = 0;
        ptr1 = head;

        while(ptr1->next != ptr2)
        {
            if(ptr1->data > ptr1->next->data)
            {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        ptr2 = ptr1;
    }
    while(swapped);
//    Node *cur;
//    if(head == NULL)
//    {
//        return;
//    }
//    else{
//        while(cur = head->next)
//        {
//            if(head->data > head->next->data)
//            {
//                swap(head, head->next);
//                head = head->next;
//                cur = head->next;
//            }
//            head = head->next;
//            cur = head->next;
//        }
//    }
}
