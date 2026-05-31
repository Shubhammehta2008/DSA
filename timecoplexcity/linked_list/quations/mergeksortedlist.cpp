
#include <iostream>
#include<vector>

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

    node* mergeTwoLists(node* list1, node* list2) {
      node* dummyheadnode = new node(-1);
      node* ptr1=list1;
      node* ptr2=list2;
      node* ptr3=dummyheadnode;

      while(ptr1 && ptr2)
     { if(ptr1->val<ptr2->val){
         ptr3->next=ptr1;
         ptr1=ptr1->next;
         }
    
    else{
        ptr3->next=ptr2;
        ptr2=ptr2->next;
    }
    ptr3=ptr3->next;
    }
    if(ptr1){
        ptr3->next=ptr1;
    }
    else{
        ptr3->next=ptr2;
    }
    return dummyheadnode->next;
}

    node* mergeksortedlist (vector<node*> &lists){
        if(lists.empty()) return NULL;
        if(lists.size()==1) return lists[0];

        node* merged = lists[0];
        for(int i=1; i<lists.size(); i++){
            merged = mergeTwoLists(merged, lists[i]);
        }
        return merged;
    }

    node* mergeKSortedLists(vector<node*>& lists) {
    if (lists.empty()) return nullptr;
    return mergeKSortedLists(lists, 0, lists.size() - 1);
}

 int main (){
    node* head1 =NULL ;
    insertathead(head1,1);
     insertattail(head1,6);
    insertattail(head1,9);
    insertattail(head1,98);
       display(head1); 

     node* head2 =NULL ;
    insertathead(head2,16);
     insertattail(head2,25);
    insertattail(head2,56);
    insertattail(head2,66);
       display(head2);

    node* head3 =NULL ;
    insertathead(head3,2);
     insertattail(head3,5);
    insertattail(head3,7);
    insertattail(head3,8);
         display(head3);

     vector<node*> lists;
     lists.push_back(head1);
     lists.push_back(head2);
     lists.push_back(head3);
        node* mergedhead = mergeKSortedLists(lists);
        display(mergedhead);

    return 0;

 }

