
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
    void display (node* head){
        node* temp =head;
        while(temp!=NULL)
        {  cout<<temp->val<<"->";
            temp = temp ->next;
        
        }
        cout<<"null"<<endl;

    }

 int main (){
    node* head =NULL ;
    insertathead(head,5);
  display(head);
    insertathead(head,6);
    display(head);
    
    
    
    return 0;

 }
