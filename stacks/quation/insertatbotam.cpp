#include<iostream>
#include<stack>
#include<vector>
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
void insertatbotam2(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int curr=s.top();
    s.pop();
   insertatbotam2(s,x);
    s.push(curr);
    
}
void insertAtBottomOptimized(stack<int> &s, int x) {
    vector<int> temp;
    
    // 1. स्टैक के सभी एलिमेंट्स को निकालकर वेक्टर में रख लें
    while(!s.empty()) {
        temp.push_back(s.top());
        s.pop();
    }
    
    // 2. सबसे पहले नए एलिमेंट (x) को खाली स्टैक में डालें (यह बॉटम बन जाएगा)
    s.push(x);
    
    // 3. वेक्टर से एलिमेंट्स को उल्टे क्रम (Reverse Order) में वापस स्टैक में डाल दें
    for(int i = temp.size() - 1; i >= 0; i--) {
        s.push(temp[i]);
    }
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    //  while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();}
   //insertatbotam2(s,5);
   insertatbotam2(s,5);
   cout<<"stack after inserting at botam is :"<<endl;
    while(! s.empty()){
        cout<< s.top()<<endl;
         s.pop();
    }
    
    return 0;
}