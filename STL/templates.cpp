#include <iostream>
using namespace std;
template <typename T>
class node {      // Template class for a node in a linked list
public:
    T val;
    node* next;

    node(T data) {
        val = data;
        next = NULL;
    }
};

int main (){
    node<int> *head = new node<int>(10);  // Creating a node of type int
    node<char> *head2 = new node<char>('A');  // Creating a node of type double
cout << "Value in integer node: " << head->val << endl;  // Output: 10
cout << "Value in character node: " << head2->val << endl;  //
    return 0;  
}