#include<iostream>
using namespace std;
    class node{
        public:
        node* next;
        int val;
      node(int data)
       {  val=data;
          next=NULL;
       }
    };
 class circularlinkedlist{
    public:
    node* head;
    circularlinkedlist(){
        head=nullptr;
    }

    void insert_at_start(int data)
{
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
        head=new_node;
    }
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
 
void deleteatstart(){
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
    if(head->next==head){
        delete head;
        head=nullptr;
        return;
    }
    node* tail=head;
    while(tail->next!=head){
        tail=tail->next;
    }
    node* temp=head;
    tail->next=head->next;
    head=head->next;
    delete temp;
}

void deleteattail(){
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
    if(head->next==head){
        delete head;
        head=nullptr;
        return;
    }
    node* temp=head;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    node* lastnode=temp->next;
    temp->next=head;
    delete lastnode; 
}
};