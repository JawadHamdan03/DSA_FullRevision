//
// Created by EngJa on 6/22/2026.
//

#ifndef DSA_FULLREVISION_TREES_H
#define DSA_FULLREVISION_TREES_H
#include <bits/stdc++.h>
using namespace std;


class TreeNode
{
public:
    int val;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int val) ;
};


class BinarySearchTree
{



public:
    TreeNode * root;
    BinarySearchTree();
    BinarySearchTree(int val);

    void printInOrderRecursive(TreeNode * rt);
    void insertRecursive(TreeNode * rt,int val);
    void insert(int val);
    bool lookup(int val);
    bool lookupRecursive(TreeNode* rt, int val);
};



#endif //DSA_FULLREVISION_TREES_H
