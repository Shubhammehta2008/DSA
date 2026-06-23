#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;
    int size;
public:
    Queue() {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    void enqueue(int data) {
        Node* newnode = new Node(data);
        if (this->head == NULL) { // Check if empty
            this->head = this->tail = newnode;
        } else {
            this->tail->next = newnode;
            this->tail = newnode;
        }
        this->size++;
    }

    void dequeue() {
        if (this->head == NULL) {
            return;
        } else {
            Node* oldhead = this->head;
            this->head = this->head->next;
            if (this->head == NULL) this->tail = NULL;
            delete oldhead;
            this->size--;
        }
    }

    int getsize() {
        return this->size;
    }

    bool isempty() {
        return this->head == NULL;
    }

    int getfront() {
        if (this->head == NULL) return -1; // Handle empty case
        return this->head->data;
    }
};

int main() {
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.enqueue(50);

    while (!qu.isempty()) {
        cout << qu.getfront() << " ";
        qu.dequeue();
    }
    return 0;
}