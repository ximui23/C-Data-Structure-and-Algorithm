//
//  main.cpp
//  BinarySearchTree
//
//  Created by Mai Tuyet Luu on 3/26/19.
//  Copyright © 2019 Mai Tuyet Luu. All rights reserved.
//

#include <iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
//#include "BTree.hpp"


struct TreeNode
    {
        int data;
        TreeNode* left;
        TreeNode* right;

    };
struct TreeNode *newNode(int x)
{
    TreeNode *temp = (struct TreeNode *)malloc(sizeof(struct TreeNode));
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


int main()
{
    
    BTree Tree;
    
    TreeNode *root = nullptr;
    
//    TreeNode* node = new TreeNode(30);
//    Tree.print(root);
    
    Tree.add(root, 30);
//    Tree.add(root, 20);
//    Tree.add(root, 40);
//
//    Tree.print(root);
    
    return 0;
}
