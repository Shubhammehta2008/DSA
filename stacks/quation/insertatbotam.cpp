#include<iostream>
#include<stack>
using namespace std;
stack<int>insertatbotam(stack<int> s,int x){
    stack<int> temp;
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    s.push(x);
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
    return s;
}
stack<int>insertatbotam2(stack<int> s,int x){
    if(s.empty()){
        s.push(x);
        return s;
    }
    int curr=s.top();
    s.pop();
    insertatbotam2(s,x);
    s.push(curr);
    return s;
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<" ";
    s.push(5);
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
    
    return 0;
}