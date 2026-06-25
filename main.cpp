#include <bits/stdc++.h>
using namespace std;

#include "1-Arrays/Arrays_Exersice.h"
#include "2-HashSets_HashMap/HashSets_HashMaps.h"
#include "3-LinkedList/LinkedList.h"
#include "4- Stacks_Queues/Stacks_Queues.h"
#include "5- Trees/Trees.h"




int main()
{
    auto bst =new BinarySearchTree(5);
    bst->insert(8);
    bst->insert(9);
    bst->insert(2);
    bst->insert(3);
    bst->insert(4);
    bst->insert(11);

   bst->print_BFS_Iterative();

    cout <<endl<<bst->max_root_leaf_sum(bst->root)<<endl;;


}