//
// Created by EngJa on 6/19/2026.
//

#ifndef DSA_FULLREVISION_DOUBLYLINKEDLIST_H
#define DSA_FULLREVISION_DOUBLYLINKEDLIST_H
#include <bits/stdc++.h>
using namespace  std;

class DoublyNode
{
public:
    int value;
    DoublyNode * next;
    DoublyNode * prev;
    DoublyNode(int value);
};

class DoublyLinkedList
{
public:
    DoublyNode * head;
    DoublyNode * tail;
    int length=0;
    DoublyLinkedList(int value);


    void append(int val);
    void prepend(int val);
    void insert(int index,int val);
    void remove(int index);
};


#endif //DSA_FULLREVISION_DOUBLYLINKEDLIST_H
