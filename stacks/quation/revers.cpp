#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int> &s){
    stack<int> temp1;
    stack<int> temp2;
    while(!s.empty()){
        temp1.push(s.top());
        s.pop();
    }
    while(!temp1.empty()){
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(!temp2.empty()){
        s.push(temp2.top());
        temp2.pop();
    }
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
   
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}