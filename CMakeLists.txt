cmake_minimum_required(VERSION 4.2)
project(DSA_FullRevision)

set(CMAKE_CXX_STANDARD 23)

add_executable(DSA_FullRevision main.cpp
        1-Arrays/Arrays_Exersice.cpp
        1-Arrays/Arrays_Exersice.h
        2-HashSets_HashMap/HashSets_HashMaps.cpp
        2-HashSets_HashMap/HashSets_HashMaps.h
        3-LinkedList/LinkedList.cpp
        3-LinkedList/LinkedList.h
        3-LinkedList/DoublyLinkedList.cpp
        3-LinkedList/DoublyLinkedList.h
        "4- Stacks_Queues/Stacks_Queues.cpp"
        "4- Stacks_Queues/Stacks_Queues.h"
        "5- Trees/Trees.cpp"
        "5- Trees/Trees.h")
