//
//  main.cpp
//  CIS17C_Assignment1
//
//  Created by Mai Tuyet Luu on 3/16/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
#include "LinkedList.hpp"
#include <iostream>
using namespace std;


int main()
{
    Linked_List L1;
    
    int input;
    
    L1.addElement(9);
    L1.addElement(3);
    L1.addElement(8);
    L1.addElement(4);
    
    
    cout << "The size of the list: " << L1.findlength() << endl;
    
    L1.print();
    cout << endl;
    cout << "Enter one element: " << endl;
    cin >> input;
    
    if(L1.isContained(input))
    {
        cout << input << " is contained in the list. " << endl;
        cout << "Removing " << endl;
        L1.removeElement(input);
        L1.print();
        cout << "\nThe new size of list: " << L1.findlength() << endl;
        
    }
    else {
        cout << input << " is not contained in the list. " << endl;
        L1.addElement(input);
        cout << input << " is adding" << endl;
        L1.print();
        cout << "\nThe new size of list: " << L1.findlength() << endl;
    }
 
    return 0;
}



