//
//  main.cpp
//  CIS17C_Assignment1_part3
//
//  Created by Mai Tuyet Luu on 3/22/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

/*
 Question: 3.25 a. Propose a data structure that supports the stack push and pop operations and a
 third operation findMin, which returns the smallest element in the data structure,
 all in O(1) worst-case time.
 b. Prove that if we add the fourth operation deleteMin which finds and removes the
 smallest element, then at least one

*/

#include <iostream>
using namespace std;
#include "LinkedList_Stack.hpp"

int main()
{
    LinkedList_Stack stack;
    
    stack.push(1);
    stack.push(4);
    stack.push(6);
    stack.print();
    
    stack.pop();
    stack.print();
    
    cout << "The minimum is: " << stack.findMin() << endl;
    
    //stack.deleteMin();
    
}
