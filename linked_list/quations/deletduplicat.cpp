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

int main (){

LinkedList l;
l.insertattail(1);
l.insertattail(2);
l.insertattail(2);
l.insertattail(3);
l.insertattail(3);
l.insertattail(3);
l.display();
 
 
 //deletDUplicatNode(l.head);
//l.display();
revers(l.head);

  return 0;
}





 