# Linked List
## Abstract data type (ADT)
## Linked List

```C++
class Node {
public:
    double data; // data
    Node* next; // pointer to next
};
```

## Operations
||isEmpty|insertNode|findNode|deleteNode|displayList|
|---|---|---|---|---|---|
|Singly Linked List|$O(1)$|$O(n)$|$O(n)$|$O(n)$|$O(n)$|

## Variations of linked lists
- Circular linked lists: The last node points to the first node of the list
- Doubly linked lists

## Arrays vs Linked Lists
||Arrays|Linked Lists|
|---|---|---|
|Dynamic|