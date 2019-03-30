//
//  BTree.cpp
//  BinarySearchTree
//
//  Created by Mai Tuyet Luu on 3/26/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#include "BTree.hpp"
#include <iostream>
using namespace std;

void BTree::print(struct TreeNode *root)
{
    if(root != NULL)
    {
        cout << root->data << endl;
        print(root->left);
        print(root->right);
    }
}

void BTree::add(TreeNode* &root, int x)
{
    if(root == nullptr)
    {
        root= newNode(x);
        return;
    }
    
    if(x < root->data)
    {
        add(root->left, x);
    }
    else
    {
        add(root->right, x);
    }
    
}
