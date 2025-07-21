# Stack
- LIFO (Last In First Out)
- top
- bottom

## Applications
- Computer systems use stacks during a program’s execution to store
function return addresses, local variables, etc.
- Some calculators use stacks for performing mathematical operations.o
## Basic operations of stack
- Attributes
    - maxTop
    - top
    - values
- Operations
    - isEmpty
    - isFull
    - top
    - push
    - pop
    - displayStack
## Implementations
### Array
- when empty, top = -1
- when full, top = maxTop - 1
#### push
- increment top by 1
- set Stack[top] = value
```C++
void Stack::Push(const double x) {
    if (IsFull())
        cout << "Error: the stack is full." << endl;
    else
        values[++top] = x;
}
```
#### pop
- return Stack[top]
- decrement top by 1
```C++
double Stack::Pop() {
    if (IsEmpty()) {
        cout << "Error: the stack is empty." << endl;
        return -1;
    }
    else
        return values[top--];
}
- $O(1)$
#### top
```C++
double Stack::Top() {
    if (IsEmpty()) {
        cout << "Error: the stack is empty." << endl;
        return -1;
    }
    else
        return values[top];
}
```
#### displayStack
```C++
void Stack::DisplayStack() {
    cout << "top -->";
    for (int i = top; i >= 0; i--)
        cout << "\t|\t" << values[i] << "\t|" << endl;
    cout << "\t|---------------|" << endl;
}
```
### Linked List

||Array|Linked List|
|---|---|---|
|Size|Static|Dynamic|

# Queue
- FIFO (First In First Out)
- front
- rear
## Operations
- enqueue
- dequeue
## Implementations
||Array|Linked List|
|---|---|---|
|Size|Static|Dynamic|
|enqueue|$O(1)$|$O(1)$|