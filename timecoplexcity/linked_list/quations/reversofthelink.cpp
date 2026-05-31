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
    
    void revers(node* &head)
    { node* Next=head->next;
     node* prev= NULL;
       node* current = head;
         while(  current!=NULL)

     {  node* temp=current;
         Next =current->next;    
        current->next=prev;  
        prev=current;
        current=Next;
     }
  head = prev;
    } 
    void reverselinkedlist2(node* head,int left,int right)
    {   
       node* current = head;
       node* prev;
       node* lp;
        for( int i=1;i<=left;i++)

       {lp=prev;
         prev=current;
        current=current->next;
       }
        node* Next=current->next;
        node* ex=prev;
     
          for(int i =left;i<right;i++)

     {  node* temp=current;
            
        current->next=prev;  
        prev=current;
        current=Next;
        Next=Next->next;
     }
     lp->next=prev;
     ex->next=current;
    //  cout<<lp->val<<endl<<ex->val<<endl;
    //   cout<<current->val<<endl;
    //   cout<<Next->val<<endl;
    //   cout<<prev->val;
    }
    void dek(node* head,int){}

 int main (){
    node* head =NULL ;
    insertathead(head,2);
      //  display(head);
    insertathead(head,1);
     //   display(head);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    //insertattail(head,6);
      //  display(head);
    
    display(head);
     reverselinkedlist2(head,2,4);
        display(head);
    
    
    
    return 0;

 }

