//
// Created by EngJa on 6/19/2026.
//

#include "LinkedList.h"

Node::Node(int value)
{
    this->value=value;
    this->next=nullptr;
}

LinkedList::LinkedList(int value)
{
     head = new Node(value);
    tail=head;
    length++;
}

void LinkedList::append(int val)
{
    if (!head)
        return;
    Node * node = new Node(val);
    tail->next=node;
    tail=node;
    length++;

}

void LinkedList::prepend(int val)
{
    if (!head)
        return;
    Node * newHead = new Node(val);
    newHead->next=head;
    head=newHead;
}

void LinkedList::insert(int index, int val)
{
    if (!head)
        return;
    if (index>length-1)
    {
        cout <<"can not insert at index "<<index<<", index out of bound"<<endl;
        return;
    }
    Node * node = new Node(val);
    auto curr = head;
    while (index && curr->next)
    {
        curr=curr->next;
        index--;
    }
    node->next=curr->next;
    curr->next=node;
    length++;
}

void LinkedList::remove(int index)
{

    if (index>length-1)
    {
        cout <<"can not remove at index "<<index<<", index out of bound"<<endl;
        return;
    }
    auto curr = head;
    index--;
    while (index)
    {
        curr=curr->next;
        index--;
    }
    Node * temp = curr->next;
    curr->next=temp->next;
    delete temp;
    length--;
}

void LinkedList::reverse()
{
    Node * prevNode=nullptr;
    Node * curr= head;


    while (curr)
    {
        Node * nextNode=curr->next;
        curr->next=prevNode;
        prevNode=curr;
        curr=nextNode;
    }
    head=prevNode;

}

void LinkedList::print()
{
    Node * curr=head;
    while (curr)
    {
        cout << curr->value<<" -> ";
        curr=curr->next;
    }
    cout <<"null"<<"\t"<<"Length: "<<length<<endl;
}
