//
// Created by EngJa on 6/22/2026.
//

#include "Trees.h"


TreeNode::TreeNode(int val)
{
    this->val=val;
    this->right=nullptr;
    this->left=nullptr;
}

BinarySearchTree::BinarySearchTree()
{
    this->root=nullptr;
}

BinarySearchTree::BinarySearchTree(int val)
{
    this->root=new TreeNode(val);
}

void BinarySearchTree::insertRecursive(TreeNode * rt,int val)
{
    if (!rt)
        return;
    if (val<rt->val)
    {
        if (!rt->left)
            rt->left=new TreeNode(val);
        else
            insertRecursive(rt->left,val);
    }
    else
    {
        if (!rt->right)
            rt->right=new TreeNode(val);
        else
            insertRecursive(rt->right,val);
    }
}

void BinarySearchTree::printInOrderRecursive(TreeNode *rt)
{
    if (!rt)
        return;
    printInOrderRecursive(rt->left);
    cout << rt->val<<'\t';
    printInOrderRecursive(rt->right);
}


void BinarySearchTree::insert(int val)
{
    TreeNode* node = new TreeNode(val);
    if (!root)
        root=node;

    TreeNode * curr= root;
    while (true){
        if (val<curr->val)
        {
            if (!curr->left)
            {
                curr->left=node;
                return;
            }
            else
                curr=curr->left;
        }
        if (val>curr->val)
        {
            if (!curr->right)
            {
                curr->right=node;
                return;
            }
            else
                curr=curr->right;
        }
    }
}

bool BinarySearchTree::lookup(int val)
{
    if (!root)
        return false;

    TreeNode * curr = root;
    while (true)
    {
        if (val== curr->val)
            return true;
        else if (val<curr->val)
        {
            if (!curr->left)
                return false;
            curr=curr->left;
        }
        else
        {
            if (!curr->right)
                return false;
            curr=curr->right;
        }
    }

}

bool BinarySearchTree::lookupRecursive(TreeNode* rt, int val)
{
    if (!rt)
        return false;
    if (rt->val==val)
        return true;
    return lookupRecursive(rt->left,val)||lookupRecursive(rt->right,val);
}











