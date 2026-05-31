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

      void insert_at_any_point(node* &head ,int val ,int pos){
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

    void updateatposition(node* &head ,int k ,int val )
     {  node* temp = head;
     int curr_pos =0;

     while (curr_pos!=k)
      {
          temp=temp->next;
          curr_pos++;
      }
    temp->val=val;
   }
 int main (){
    node* head =NULL ;
    insertathead(head,5);
        display(head);
    insertathead(head,6);
        display(head);
    insertattail(head,9);
        display(head);
     insert_at_any_point(head,15,3);
        display(head);
    insert_at_any_point(head,65,2);
        display(head);
    
    
    
    return 0;

 }

