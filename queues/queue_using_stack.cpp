#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int> s1;
    stack<int> s2;

    public:
    queue(){
    }
    void push(int x){
       this->s1.push(x);
    }
    void pop(){
        if(!s1.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
             while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }

        }

    }
    int  front(){
         if(s1.empty()){return -1;}
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }

            int rr=s2.top();

             while(!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
           return rr;
    }

bool empty() {
        return s1.empty();
    }
};

int main (){
queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    cout << "Front: " << q.front() << endl; // Should output 1
    q.pop();
    cout << "Front after pop: " << q.front() << endl; // Should output 2
    return 0;
}