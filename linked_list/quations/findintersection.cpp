
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
   
     insertathead(head2,6);
     insertattail(head2,7);
     head2->next->next=head1->next->next->next;
     display(head1);
     display(head2);
  cout<<lenth(head1)<<" "<<lenth(head2)<<endl;
    node*intersection=intersect(head1,head2);
    if(intersection)
    {cout<<intersection->val<<endl;}
    else
    {cout <<"no intersection"<<endl;}

    
    
    
    return 0;

 }

