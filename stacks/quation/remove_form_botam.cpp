#include<iostream>
#include<stack>
using namespace std;
void remove_form_bptam(stack<int> &s){
    if (s.empty()){
        return;
    }
    if(s.size()==1){
        s.pop();
        return;
    }
    int curr=s.top();
    s.pop();
    remove_form_bptam(s);
    s.push(curr);
    return;
}
void remove_form_botam2(stack<int> &s){
    if(s.empty()){
        return;
    }
    if(s.size()==1){
        s.pop();
        return;
    }
    stack<int> temp;
    while(s.size()!=1){
        temp.push(s.top());
        s.pop();

    }
    s.pop();
    while(temp.size()>0){
        s.push(temp.top());
        temp.pop();
    }
}