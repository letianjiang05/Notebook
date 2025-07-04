#include <iostream>
using namespace std;

// Doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Function to insert a node at the end of the list
void insertNode(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Function to reverse the doubly linked list
void reverseList(Node*& head) {
    if (!head || !head->next) return;
    
    Node* temp = nullptr;
    Node* current = head;
    
    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    
    if (temp != nullptr) {
        head = temp->prev;
    }
}

// Function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data;
        if (temp->next) cout << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    int n;
    cout << "Input: " << endl;
    cin >> n;
    
    Node* head = nullptr;
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertNode(head, val);
    }

    cout << "Output: " << endl;

    reverseList(head);
    
    printList(head);
    
    return 0;
}