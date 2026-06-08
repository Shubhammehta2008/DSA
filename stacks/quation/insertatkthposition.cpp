#include<iostream>
#include<stack>
using namespace std;
void insertatkthposition(stack<int> &s,int x,int k){
    if(k==1){
        s.push(x);
        return;
    }
    int size=s.size();
    int curr=s.top();
    s.pop();
    insertatkthposition(s,x,size-k+1);
    s.push(curr);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    insertatkthposition(s,5,2);
    cout<<"stack after inserting at kth position is :"<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}