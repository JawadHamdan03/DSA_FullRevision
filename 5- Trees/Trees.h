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

    void print_BFS_Iterative();
    void print_DFS_Iterative();
    void printInOrderRecursive(TreeNode * rt);

    void insertRecursive(TreeNode * rt,int val);
    void insert(int val);

    bool lookup(int val);
    bool lookupRecursive(TreeNode* rt, int val);

    int treeSumRecursive(TreeNode * root);
    int treeSumIterative();

    bool includes_BFS(int val);
    bool includes_DFS(TreeNode * root,int val);

    int minValue_Iterative_BFS();
    int minValue_Recursive_DFS(TreeNode * root,int min_val=INT_MAX);

    int max_root_leaf_sum(TreeNode * root, int sum=0);

};



#endif //DSA_FULLREVISION_TREES_H
