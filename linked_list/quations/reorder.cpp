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
    
void odd_even(node* &head)
{
    node* odd =head;
    node* even= head->next;
    node* even_start = even;
    while (odd->next!=NULL &&even->next!=nullptr)
    {  odd->next=odd->next->next;
        even->next=even->next->next;
        odd=odd->next;
        even=even->next;
    }
    odd->next=even_start;

}
    
node* reorder(node* &head){
    if(head==NULL || head->next==NULL)
    return head;
    node* slow = head;
    node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL)
    {  slow=slow->next;
        fast=fast->next->next;
    }
    node* second_half = slow->next;
    slow->next=NULL;
    node* prev = NULL;
    node* curr = second_half;
    node* Next ;
     while(curr!=NULL)
     { Next = curr->next;
       curr->next=prev;
       prev=curr;
       curr=Next;

     }
     second_half=prev;

     node* first_half = head;

     while(first_half!=NULL && second_half!=NULL)
     {  Next = first_half->next;
        first_half->next=second_half;
        first_half=Next;

        Next = second_half->next;
        second_half->next=first_half;
        second_half=Next;

     }
     return head;
 
}
     int main (){
    node* head =NULL ;
    insertathead(head,1);
      insertattail(head,2);
      insertattail(head,3);
      insertattail(head,4);
      insertattail(head,5);
     // insertattail(head,6);
        display(head);
        head = reorder(head);
        display(head);
    return 0;

 }

