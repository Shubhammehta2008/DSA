#include<iostream>
using namespace std;
class Node {
 public:
 int val;
 Node* next;
 Node(int d)
{
    val=d;
    next=nullptr;

}
};
class Stack {
    Node*  head;
    int capacity;
    int currsize;
    public:
    Stack(int c){
        head=nullptr;
        this->capacity=c;
        this->currsize=0;
        
    }
    bool isempty(){
        return head==nullptr;
    }
    bool isfull(){
        return currsize==capacity;
    }
    void push(int x){
        if(isfull()){
            cout<<"stack overflow"<<endl;
        }
        else{
            Node* temp=new Node(x);
            temp->val=x;
            temp->next=head;
            head=temp;
            currsize++;
        }
        }
        int size(){
            return currsize;
        }
        int pop(){
            if(isempty()){
                cout<<"stack underflow"<<endl;
                return -1;

            }
            else{
                int x=head->val;
                Node* temp=head;
                head=head->next;
                delete temp;
                currsize--;
                return x;
            }
        }
        int peek(){
            if(isempty()){
                cout<<"stack is empty"<<endl;
                return -1;
            }
            else{
                return head->val;
            }
        }
    
};
int main (){
    Stack s(6);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
 cout<<"top element is "<<s.peek()<<endl;
    cout<<"stack size is "<<s.size()<<endl;
    cout<<"popped element is "<<s.pop()<<endl;
    cout<<"top element is "<<s.peek()<<endl;
    cout<<"stack size is "<<s.size()<<endl;
    return 0;
}
