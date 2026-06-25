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

void BinarySearchTree::printInOrderRecursive(TreeNode *rt)
{
    if (!rt)
        return;
    printInOrderRecursive(rt->left);
    cout << rt->val<<'\t';
    printInOrderRecursive(rt->right);
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


void BinarySearchTree::print_BFS_Iterative()
{
    if (!root)
        return;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int length = q.size();
        for (int i = 0; i < length; ++i)
        {
            TreeNode * front=q.front();
            q.pop();
            cout << front->val<<'\t';
            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }
        cout << endl;
    }
}


void BinarySearchTree::print_DFS_Iterative()
{
    if (!root)
        return;
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        TreeNode * top=st.top();
        st.pop();
        cout << top->val<<'\t';
        if (top->right)
            st.push(top->right);
        if (top->left)
            st.push(top->left);
    }
}



int BinarySearchTree::treeSumRecursive(TreeNode *root)
{
    if (!root)
        return 0;

    return root->val+treeSumRecursive(root->left)+treeSumRecursive(root->right);
}

int BinarySearchTree::treeSumIterative()
{
    if (!root)
        return 0;
    queue<TreeNode*> q;
    q.push(root);
    int sum=0;
    while (!q.empty())
    {
        int length= q.size();
        for (int i = 0; i < length; ++i)
        {
            TreeNode * front = q.front();
            q.pop();
            sum+=front->val;
            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }
    }
    return sum;
}


bool BinarySearchTree::includes_BFS(int val)
{
    if (!root)
        return false;
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty())
    {
        int length = q.size();
        for (int i = 0; i < length; ++i)
        {
            TreeNode * front = q.front();
            if (front->val==val)
            {
                return true;
            }
            q.pop();
            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }
    }
    return false;
}


bool BinarySearchTree::includes_DFS(TreeNode *root, int val)
{
    if (!root)
        return false;
    if (root->val==val)
        return true;
    return includes_DFS(root->left,val) || includes_DFS(root->right,val);
}


int BinarySearchTree::minValue_Iterative_BFS()
{
    if (!root)
        return -1;
    queue<TreeNode *> q;
    q.push(root);
    int min_val=INT_MAX;
    while (!q.empty())
    {
        int length = q.size();
        for (int i = 0; i < length; ++i)
        {
            TreeNode* front= q.front();
            q.pop();

            min_val=min(min_val,front->val);

            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }
    }
    return min_val;
}

int BinarySearchTree::minValue_Recursive_DFS(TreeNode *root, int min_val)
{
    if (!root)
        return min_val;
    min_val=min(min_val,root->val);
    return min(minValue_Recursive_DFS(root->left,min_val),minValue_Recursive_DFS(root->right,min_val));
}


int BinarySearchTree::max_root_leaf_sum(TreeNode *root, int sum)
{
    if (!root)
        return sum;
    return max( max_root_leaf_sum(root->left,root->val+sum),
                max_root_leaf_sum(root->right,root->val+sum));

}
