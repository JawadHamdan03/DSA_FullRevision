#include <bits/stdc++.h>
using namespace std;

#include "1-Arrays/Arrays_Exersice.h"



int main()
{
    cout<<Reverse_string("jawad")<<endl;
    cout<<Reverse_String2("jawad")<<endl;

    auto res=MergeSortedArrays({1,2,3,8,9},{4,5,6,7,10});
    PrintVector(res);

    auto res2=MergeSortedArrays2({1,2,3,8,9},{4,5,6,7,10});
    PrintVector(res2);
}