#include<iostream>
using namespace std;
class node {
  public:
    int val;
    node* next;
    bool visited;
    node(int data){
        val=data;
        next = NULL;
    }

};
class  LinkedList{
    public:
  node* head;
  LinkedList(){
    head =NULL;
  } 
  void insertattail(int value){
    node* new_node= new node(value) ;
    if(head==NULL){
      head=new_node;
      return ;
    }
      node* temp=head;
      while(temp->next!=NULL)
      {
       temp= temp->next;
      }
     temp->next=new_node;
  }
  
 void display(){
  node*temp =head;
  while(temp!=NULL)
  {
    cout<<temp->val<<"->";
    temp=temp->next;
  }
  cout<<"null"<<endl;
 }
};
void deletalternatenodes(node* &head)
{
node* curr_node=head;
while( curr_node!=NULL && curr_node->next!=NULL)
{
 node* temp=curr_node->next;
 curr_node->next=temp-> next;
 delete temp;
 curr_node = curr_node->next;
}

}

void deletDUplicatNode( node* &head)
{
   node* curr_node=head;
    while( curr_node!= NULL && curr_node->next!=NULL)
    {
      while(curr_node->next!=NULL  && curr_node->val==curr_node->next->val)
       {    node* temp = curr_node->next;
          curr_node->next=curr_node ->next->next;

           delete temp; 
       }  //this loop end when current mode and next node valuse are diffrent  
        //or linkedlist end 
     curr_node =curr_node->next;
    }    


}

void revers(node* &head)
 { if(head==NULL) return;
    revers(head->next);
    cout<<head->val<<"->";
 }

 bool checkequailLinkedlist(node* head1, node*head2)
 {
    node* ptr1=head1;
    node* ptr2= head2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if (ptr1->val!=ptr2->val){
            return false;
        }
    ptr1=ptr1->next;
    ptr2=ptr2->next;
    }
return (ptr1==NULL && ptr2==NULL); true;
 }

 int main (){

LinkedList ll,ld;
ll.insertattail(1);
ll.insertattail(2);
ll.insertattail(3);
ll.insertattail(4);
ll.insertattail(5);
ld.insertattail(1);
ld.insertattail(2);
ld.insertattail(3);
ld.insertattail(5);
ld.insertattail(5);
ll.display();
 ld.display();
 cout<<checkequailLinkedlist(ll.head,ld.head)<<endl;
 
 


  return 0;
}





 