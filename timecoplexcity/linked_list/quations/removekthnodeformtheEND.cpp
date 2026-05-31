
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
 void removekthnodefromtheend(node* &head,int k)
 {       node*ptr1=head;
         node*ptr2=head;
        int  count =k+1;
    while(count>0)
    {ptr2=ptr2->next;
     count--;
    }

    if(ptr2!=NULL)
    {node* temp =head;
    head=head->next;
    delete temp;}
    while(ptr2->next!=NULL){
        ptr2=ptr2->next;
        ptr1=ptr1->next;
        }
        node* temp =ptr1->next;
        ptr1->next=ptr1->next->next;
        delete temp;


   
}

 void insertathead(node* &head, int val)
    {  node* new_node = new node(val);
        new_node->next =head;
        head = new_node;

    }
    
    void insertattail(node* &head,int val)
     { node* new_node = new node (val);
        node* temp = head;
        while(temp->next!=NULL){
        temp=temp->next;
     }   
        temp->next=new_node;
    }

    int lenth( node* head) 
   { 
    node* ptr=head;
    int couu=0;
      while(ptr!=NULL)
      { 
          couu++;
          ptr=ptr->next;
      
    }
    return couu;
   }  
  
    node* moveheadbyk(node* head, int k)
{     node*ptr =head;
while(k--){
    ptr=ptr->next;
   }
   return ptr;
}

    node* intersect(node* &head1, node* &head2)
{    int len1=lenth(head1);
     int len2=lenth(head2);
     int diff=abs(len1-len2);
     node* ptr1=head1;
     node* ptr2=head2;
     if(len1<len2)
     { ptr2 = moveheadbyk(ptr2,diff);
    }
     else     { ptr1=moveheadbyk(ptr1,diff);
    }
     while(ptr1!=NULL && ptr2!=NULL)
       {if(ptr1==ptr2)
      {return ptr1;}
      ptr1=ptr1->next;
      ptr2=ptr2->next;
      
     }
return NULL;
   }

    void display (node* head){
        node* temp =head;
        while(temp!=NULL)
        {  cout<<temp->val<<"->";
            temp = temp ->next;
        
        }
        cout<<"null"<<endl;

    }

    int main (){
    node* head1 =NULL ;
    node* head2 =NULL ;
    insertathead(head1,1);
    insertattail(head1,2);
     insertattail(head1,3);
     insertattail(head1,4);
     insertattail(head1,5);
   
     display(head1);
     removekthnodefromtheend(head1,3);
      display(head1);
    
    
    
    return 0;

 }

