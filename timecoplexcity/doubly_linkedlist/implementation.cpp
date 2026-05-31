#include <iostream>
using namespace std;
    class node{
        public:
        int val;
        node* next;
        node* prev;
    node(int data)
 { val=data;
  prev=NULL;
  next=NULL;
 }


    };
    class doublylinkedlist{
      public: 
      node* head;
      node* tail;
      doublylinkedlist(){
        head=NULL;
        tail=NULL;
      }
    };

    int main(){
node* new_node =new node(5);
doublylinkedlist dl;
dl.head=new_node;
dl.tail=new_node;
cout<<dl.head->val<<" "<<dl.tail->val<<endl;
       return 0;
     }