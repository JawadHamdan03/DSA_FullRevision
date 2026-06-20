#include <bits/stdc++.h>
using namespace std;

#include "1-Arrays/Arrays_Exersice.h"
#include "2-HashSets_HashMap/HashSets_HashMaps.h"
#include "3-LinkedList/LinkedList.h"
#include "4- Stacks_Queues/Stacks_Queues.h"



int main()
{
    MyQueue<int> qu;
    int x;
    for (int i = 0; i < 5; ++i)
    {
        cout <<"x: ";cin >>x;
        qu.push(x);
    }

    while (!qu.empty())
    {
        cout << qu.front()<<endl;
        qu.pop();
    }
}