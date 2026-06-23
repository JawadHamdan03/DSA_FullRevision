#include <bits/stdc++.h>
using namespace std;

#include "1-Arrays/Arrays_Exersice.h"
#include "2-HashSets_HashMap/HashSets_HashMaps.h"
#include "3-LinkedList/LinkedList.h"
#include "4- Stacks_Queues/Stacks_Queues.h"
#include "5- Trees/Trees.h"




int main()
{
    // auto bst =new BinarySearchTree(5);
    // bst->insert(8);
    // bst->insert(9);
    // bst->insert(2);
    // bst->insert(3);
    //
    // bst->printInOrderRecursive(bst->root);
    // cout <<endl<<bst->lookupRecursive(bst->root,3);
    // cout <<endl<<bst->lookupRecursive(bst->root,4);
    // cout <<endl<<bst->lookupRecursive(bst->root,6);
    // cout <<endl<<bst->lookupRecursive(bst->root,9);


    priority_queue<int> pq;
    pq.emplace(1);
    pq.emplace(8);
    pq.emplace(4);
    pq.emplace(12);
    pq.emplace(2);

    while (!pq.empty())
    {
        cout << pq.top()<<'\t';
        pq.pop();
    }

}