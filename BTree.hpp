//
//  BTree.hpp
//  BinarySearchTree
//
//  Created by Mai Tuyet Luu on 3/26/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#ifndef BTree_hpp
#define BTree_hpp
#include<stdio.h>
#include<stdlib.h>


#endif /* BTree_hpp */

//class BTree
//{
struct TreeNode
    {
        int data;
        TreeNode* left;
        TreeNode* right;
        
    };
    
struct TreeNode *newNode(int x)
    {
        TreeNode *temp = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        //TreeNode *temp = new TreeNode;
        temp->data = x;
        temp->left = NULL;
        temp->right= NULL;
        return temp;
    }

class BTree
{
public:
    void print(struct TreeNode *root);
    void add(TreeNode* &root, int x);
    
};
