//
// Created by EngJa on 6/20/2026.
//

#ifndef DSA_FULLREVISION_STACKS_QUEUES_H
#define DSA_FULLREVISION_STACKS_QUEUES_H

#include <bits/stdc++.h>
using namespace std;



template <typename T>
class MyStack
{
private:
    T arr[1000];
    int curr=0;
    int sz=0;
public:
    MyStack(){}
    void push(T val)
    {
        arr[curr]=val;
        curr++;
        sz++;
    }

    T top()
    {
        return arr[curr-1];
    }
    void pop()
    {
        if (!sz)
        {
            cout << "Queue is empty";
            return;
        }
        curr--;
        sz--;
    }
    int size()
    {
        return size;
    }
    bool empty()
    {
        return sz==0;
    }


};


template <typename T>
class MyQueue
{
private:
    T arr[1000];
    int fr=0;
    int curr=0;
    int sz=0;
public:
    MyQueue(){}
    void push(T val)
    {
        arr[curr]=val;
        curr++;
        sz++;
    }
    void pop()
    {
        if (!sz)
        {
            cout << "Queue is empty";
            return;
        }
        fr++;
        sz--;
    }

    T front()
    {
        return arr[fr];
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz==0;
    }
};




#endif //DSA_FULLREVISION_STACKS_QUEUES_H
