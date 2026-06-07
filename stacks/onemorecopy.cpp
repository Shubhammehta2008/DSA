#include<iostream>
using namespace std;
class stack{
    int capacity;
    int top;
    int* arr;
    public:
    stack(int size){
        capacity=size;
        arr=new int [size];
        top=-1;
    }
    void push(int x){
        if (top==capacity-1)
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=x;
        }
    }
     int pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return -1;
        }
        else{
            int x=arr[top];
            top--;
            return x;
        }
        }
        int peek(){
            if(top==-1){
                cout<<"stack is empty"<<endl;
                return -1;
            }
            else{
                return arr[top];
            }
        }
        int size ()
        {
            return top+1;
        }
 bool isempty(){
    return top ==-1;
 }

    };
  int main(){
    stack s(5);
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