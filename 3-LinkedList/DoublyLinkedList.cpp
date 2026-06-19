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
    length++;
}


void DoublyLinkedList::insert(int index,int val)
{
    if (!head)
        return;
    if (index>length-1)
        return;

    DoublyNode * curr =head;
    while (index && curr->next)
    {
        curr=curr->next;
        index--;
    }
    DoublyNode * node = new DoublyNode(val);

    node->next=curr->next;
    node->prev=curr;
    curr->next->prev=node;
    curr->next=node;
}


void DoublyLinkedList::remove(int index)
{
    if (!head)
        return;
    if (index>length-1)
        return;
    index--;
    DoublyNode * curr = head;
    while (index-- && curr->next)
    {
        curr=curr->next;
    }

    auto toDelete= curr->next;
    curr->next=toDelete->next;
    toDelete->next->prev=curr;
    delete toDelete;
}


