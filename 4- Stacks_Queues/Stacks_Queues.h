//
// Created by EngJa on 6/20/2026.
//

#ifndef DSA_FULLREVISION_STACKS_QUEUES_H
#define DSA_FULLREVISION_STACKS_QUEUES_H

#include <bits/stdc++.h>
using namespace std;



template <typename T>
class Stack
{
private:
    T arr[1000];
    int curr=0;
    int sz=0;
public:
    Stack(){}
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
class Queue
{
private:
    T arr[1000];
    int fr=0;
    int curr=0;
    int sz=0;
public:
    Queue(){}
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



// 232. Implement Queue using Stacks
class MyQueue {
    stack<int>st1;
    stack<int>st2;
public:
    MyQueue() {

    }

    void push(int x) {
        st1.push(x);
    }

    int pop() {
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        int res = st2.top();
        st2.pop();
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return res;
    }

    int peek() {
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        int res = st2.top();

        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return res;
    }

    bool empty() {
        return st1.empty();
    }
};




#endif //DSA_FULLREVISION_STACKS_QUEUES_H
