#include<iostream>
using namespace std;
    class node{
        public:
        node* next;
        int val;
    node(int data)
    { val=data;
      next=NULL;
    }
    };
 class circularlinkedlist{
    public:
    node* head;
    circularlinkedlist(){
        head=nullptr;
    }
    void insertattail(int data){
        node* new_node=new node(data);
        if(head==nullptr){
            head=new_node;
            new_node->next=head;
        }
        else{
            node* temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=new_node;
            new_node->next=head;
        }
    }
    
    void display(node* head) {
        if (head == nullptr) return; // Check for empty list
        node* curr = head;
        do {
            cout << curr->val << " ";
            curr = curr->next;
        } while (curr != head);
        cout << endl;
    }
};