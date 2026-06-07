//
// Created by hamda on 6/6/2026.
//

#include "Arrays_Exersice.h"


void Static_DynamicArray()
{

    // static array
    int a[20];

    // dynamic array
    int n ; cin >>n;
    int * array = new int[n]();

    // to deal simplify the using of arrays use vectors from <vector.h>
    vector<int> vec={1,2,3,4};

}

// reverse string
string Reverse_string(string str)
{
    string res ="";
    for (int i = str.size()-1; i >=0; --i)
    {
        res+=str[i];
    }
    return res;
}

// reverse string 2 pointers
string Reverse_String2(string str)
{
    int l =0; int r = str.size()-1;

    while (l<r)
    {
        //op
        swap(str[l],str[r]);
        l++;r--;
    }

    return str;
}

// Merge Sorted arrays
vector<int> MergeSortedArrays(vector<int> vec1, vector<int> vec2)
{
    vector<int> res;

    int i=0;
    int j=0;
    while (i < vec1.size() or j < vec2.size())
    {
        if (vec1[i]<=vec2[j] and i<vec1.size())
        {
            res.push_back(vec1[i]);
            i++;
        }
        else if (vec2[j]<=vec1[i] and j<vec2.size())
        {
            res.push_back(vec2[j]);
            j++;
        }
    }
    return res;
}

// using built-in sort function
vector<int> MergeSortedArrays2(vector<int> vec1, vector<int> vec2)
{
    vector<int> res;

    // add all elements to one array
    for (int i : vec1)
        res.push_back(i);

    for (int i : vec2)
        res.push_back(i);

    // sort the res vector
    sort(res.begin(),res.end());
    return res;
}

void PrintVector(vector<int> vec1)
{
    for (int i : vec1)
        cout << i<<'\t';

    cout <<endl;
}