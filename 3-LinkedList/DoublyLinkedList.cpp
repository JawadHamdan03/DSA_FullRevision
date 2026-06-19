//
// Created by EngJa on 6/19/2026.
//

#include "DoublyLinkedList.h"


DoublyNode::DoublyNode(int value)
{
    this->value=value;
    this->next=nullptr;
    this->prev=nullptr;
}

DoublyLinkedList::DoublyLinkedList(int value)
{
    head= new DoublyNode(value);
    tail=head;
    length++;
}

void DoublyLinkedList::append(int val)
{
    if (!head)
        return;
    auto node = new DoublyNode(val);
    tail->next=node;
    node->prev=tail;
    tail=node;
    length++;
}

void DoublyLinkedList::prepend(int val)
{
    if (!head)
        return;
    auto node = new DoublyNode(val);
    node->next=head;
    head->prev=node;
    head=node;
}



