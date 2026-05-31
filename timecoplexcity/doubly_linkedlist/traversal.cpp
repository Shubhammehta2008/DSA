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
        head=NULL;
        tail=NULL;
      }

      void display(){
        node* temp=head;
       
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
       
      }
      void insertathead(int val)
      {
        node* new_node=new node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
           return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
      }
      void insertattail(int val)
      {
        node* new_node=new node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
           return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
      }
    
     void deleteATposition(int pos)
     {  node * temp = head;
    int counter=1;
    while(counter<pos)
    { temp=temp->next;
     counter++;
     }
     if(temp==NULL){
        cout<<"position out of range\n";
        return;
     }
     if(temp->prev!=NULL){
        temp->prev->next=temp->next;
     }
     else{
        head=temp->next;
     }
     if(temp->next!=NULL){
        temp->next->prev=temp->prev;
     }
     else{
        tail=temp->prev;
     }
     delete temp;
     }
    
    };

    void deleteathead(doublylinkedlist &dl)
    {
        if(dl.head==NULL){
            cout<<"list is empty\n";
            return;
        }
        node* temp=dl.head;
        dl.head=dl.head->next;
        if(dl.head!=NULL){
            dl.head->prev=NULL;
        }
        delete temp;
    }
       
       void deleteatEnd(doublylinkedlist &dl)
    {
        if(dl.tail==NULL){
            cout<<"list is empty\n";
            return;
        }
        node* temp=dl.tail;
        dl.tail=dl.tail->prev;
        if(dl.tail==NULL)
        {  dl.head=NULL;  }
        else{
            dl.tail->next=NULL;
        }
        delete temp;
    }

    
       

    void insert_at_any_point(doublylinkedlist &dl,int val,int pos){
        if(pos==0){
            dl.insertathead(val);
            return;
        }
        node* new_node =new node (val);
      node* temp=dl.head;
      int current_position=0;
         while(current_position!=(pos-1)) {
         temp=temp->next;
        current_position++;
        }
      // temp is pointing to node at pos-1
      new_node->next = temp->next;
      if(temp->next!=NULL){
        temp->next->prev=new_node;
      }
      temp->next=new_node;
      new_node->prev=temp;
    
    }

    

    int main(){
node* new_node =new node(5);
doublylinkedlist dl;
dl.insertathead(1);
dl.insertathead(2);
dl.insertathead(3);
dl.insertathead(4);
dl.insertathead(5);
dl.insertathead(6);
dl.display();
deleteathead(dl);
       return 0;
     }