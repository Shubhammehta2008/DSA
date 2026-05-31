#include<iostream>
using namespace std;
class node {
  public:
    int val;
    node* next;
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


int main (){

LinkedList l;
l.insertattail(1);
l.insertattail(2);
l.insertattail(3);
l.insertattail(4);
l.insertattail(5);
l.insertattail(6);
l.display();
 deletalternatenodes(l.head);
 l.display();


  return 0;
}





 