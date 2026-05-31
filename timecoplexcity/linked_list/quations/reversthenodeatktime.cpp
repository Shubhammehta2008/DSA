//#include<bits/stdc++.h>
#include <iostream>

using namespace std;
 class node {
    public:
    int val;
    node*next ;
    node (int data){
         val=data;
         next=NULL;
    }
 };
      void insertathead(node* &head, int val){ 
           node* new_node = new node(val);
        new_node->next =head;
        head = new_node;
      }

      void insert_at_any_point(node*head ,int val ,int pos){
        if(pos==0){
            insertathead(head,val);
        }
        else {
            node* new_node =new node (val);
      node* temp=head;
      int current_position=0;
         while(current_position!=(pos-1)) {
         temp=temp->next;
        current_position++;
        }
      // temp is pointing to node at pos-1
      new_node->next = temp->next;
      temp->next=new_node;
    
      } 
    }

      void insertattail(node* &head,int val)
     { node* new_node = new node (val);
        node* temp = head;
        while(temp->next!=NULL){
        temp=temp->next;
     }   
        temp->next=new_node;
    }

      void display (node* head){
        node* temp =head;
        while(temp!=NULL)
        {  cout<<temp->val<<"->";
            temp = temp ->next;
        
        }
        cout<<"null"<<endl;

    }

    void rtnakt(node* &head,int k)
    {  if (head ==NULL)return;
        node* prev=nullptr;
        node* curr= head;
        node* Next=nullptr;
        
     for (int i=0;i<k;i++)
    { Next=curr->next;
     curr->next=prev;
     prev=curr;
     curr=Next;
    }

    rtnakt(Next,k);
     head->next=Next;
     head=prev;
     
     
    }
 
    int main (){
     node* head =NULL;
    insertathead(head,1);
    insertattail(head,2);
        display(head);
         insertattail(head,3);
        display(head);
         insertattail(head,4);
        display(head);
         insertattail(head,5);
        display(head);
         insertattail(head,6);
        display(head);
        rtnakt(head,3   );
    display(head);
    
    
    return 0;

 }

