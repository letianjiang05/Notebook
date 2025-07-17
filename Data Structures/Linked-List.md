# Linked List
## Abstract data type (ADT)
- A data abstraction is a simplified view of an object that
    - includes only features one is interested in.
    - while hides away the unnecessary details.
- In programming languages, a data abstraction becomes an abstract data type (ADT) or a user-defined type.
- In OOP, it is implemented as a class
## Linked List
- A linked list is a series of connected nodes
- Each node contains at least
  - A piece of data (any type)
  - Pointer to the next node in the list
- Head: pointer to the first node
- The last node points to NULL
- We use two classes: Node and List

```C++
class Node {
public:
    double data; // data
    Node* next; // pointer to next
};
```

## Basic operations of linked lists
- Insert, find, delete, print, etc.
## Variations of linked lists
- Circular linked lists
- Doubly linked lists