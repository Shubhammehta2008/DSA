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
void copystack2(stack<int> s,stack<int> &copy)
{ 
    if(s.empty()){
        return;
    }
    
    int curr=s.top();
    s.pop();
    
    copystack2(s,copy);
    copy.push(curr);
     
    return;
}
int main(){
    stack<int> s;
    s.push(1);
     s.push(2);
      s.push(3);
       s.push(4);
        s.push(5);
       
    stack<int> s2;
    copystack2(s, s2);
   cout<<"copied stack is "<<endl;
    while(!s2.empty()){
        cout<<s2.top()<<endl;
        s2.pop();
    }
    cout <<"original stack is "<<endl;
     while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}
