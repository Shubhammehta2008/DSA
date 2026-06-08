#include<iostream>
#include<stack>
using namespace std;
class Stack {


};
int main(){
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