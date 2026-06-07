#include <iostream>
using namespace std;
class Stack {
private:  
 int* arr;               // Array to hold stack elements
 int top;               // Index of the top element
 int capacity;          // Maximum capacity of the stack  public:


 public:
    Stack(int size) {       // Constructor to initialize the stack
       
        this->capacity = size;
         arr = new int[size];   // Allocate memory for the stack
        this->top = -1;  // Initialize top of stack to -1
    }

      void push(int x)
      {    if (top == capacity - 1) {
        cout << "Stack overflow" << endl;
        return;
    }
       arr[++top] = x;
      }

      int pop() {  // Function to pop an item from the stack
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return arr[top--];
    }
    int peek() {  // Function to return the top item from the stack
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    int size() {  // Function to return the size of the stack
        return top + 1;
    }
    ~Stack() {  // Destructor to free memory allocated for the stack
        delete[] arr;
    }
};

int main() {
   
    return 0;
}