#include <iostream>
using namespace std;
    class node{
        public:
        int val;
        node* next;
        node* prev;
    node(int data)
 { val=data;
  prev=NULL;
  next=NULL;
 }


    };
   
    class doublylinkedlist{
      public: 
      node* head;
      node* tail;
      doublylinkedlist(){
        head=nullptr;
        tail=nullptr;
      }
      void insertattail(int data){
        node* new_node=new node(data);
        if(head==nullptr){
            head=new_node;
            tail=new_node;
        }
        else{
            tail->next=new_node;
            new_node->prev=tail;
            tail=new_node;
        }
      }
    
    void display(node* head) {
        node* curr = head;
        while (curr != nullptr) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    void reverse(){
        node* curr=head;
        node* temp=nullptr;
        while(curr!=nullptr){
            temp=curr->next;
            curr->next=curr->prev;
            curr->prev=temp;
            curr=temp;
        
     
        if(temp!=nullptr){
            head=temp->prev;
        }
        head= tail;
    }
    }
   
};

    int main(){
node* new_node =new node(5);
doublylinkedlist dl;
dl.head=new_node;
dl.tail=new_node;
cout<<dl.head->val<<" "<<dl.tail->val<<endl;
     dl.insertattail(10);
     dl.insertattail(15);
     dl.insertattail(20);
     dl.display(dl.head);
     dl.reverse();
     dl.display(dl.head);
return 0;
     }