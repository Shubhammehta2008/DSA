#include<iostream>
#include<stack>
using namespace std;
stack<int> copystack(stack<int> s){
    stack<int> temp;
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    stack<int> copy;
     while(!temp.empty()){
        copy.push(temp.top());
        temp.pop();
    }
    return copy;
}
int main(){
    stack<int> s;
    s.push(1);
    stack<int> s2 = copystack(s);
    cout<<s2.top()<<endl;
    return 0;
}
