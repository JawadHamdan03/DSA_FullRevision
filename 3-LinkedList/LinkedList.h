//
// Created by EngJa on 6/19/2026.
//

#ifndef DSA_FULLREVISION_LINKEDLIST_H
#define DSA_FULLREVISION_LINKEDLIST_H
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node * next;
    Node(int value);
};

class LinkedList
{
public:
    Node * head;
    Node * tail;
    int length=0;
    LinkedList(int value);

    void append(int val);
    void prepend(int val);
    void insert(int index,int val);
    void remove(int index);
    void print();
};




#endif //DSA_FULLREVISION_LINKEDLIST_H
