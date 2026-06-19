#include <bits/stdc++.h>
using namespace std;

#include "1-Arrays/Arrays_Exersice.h"
#include "2-HashSets_HashMap/HashSets_HashMaps.h"
#include "3-LinkedList/LinkedList.h"

int main()
{
    auto l1 = new LinkedList(5);

    l1->append(8);
    l1->append(2);
    l1->append(6);
    l1->append(17);
    l1->append(21);
    l1->prepend(1);
    l1->prepend(11);

    l1->insert(3,7);
    l1->insert(8,25);
    l1->insert(0,-5);
    l1->insert(20,-5);
    cout <<"linkedList1: ";l1->print();
    l1->remove(3);
    l1->remove(20);
    cout <<"linkedList1: ";l1->print();

}