//
// Created by EngJa on 6/18/2026.
//

#include "HashSets_HashMaps.h"


void OverView()
{
    set<int> st;
    map<int,int> mp;

    // Time Complexity of HashSet and Map Operations
    // O(1) for insert, search, delete,update
    st.insert(1);
    st.insert(4);
    bool found=st.contains(1);

    mp[5]=8;
    mp[7]=12;
    mp[2]=4;
    bool found2=mp.contains(2);

    // in c++, sets stores elements in order, there is also unordered_set
    // c++ orders the map elements based on the keys
}


char first_recurring_char(string str)
{
    set<char> st;
    for (char c : str)
    {
        if (st.contains(c))
            return c;
        st.insert(c);
    }
    return '\0';
}
