#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool is_valid(string s){
    stack <char> st;
    for(int i=0; i<s.size();i++){
        char ch=s[i];
        if( ch == '(' || ch =='{' ||  ch =='[')
        {
            st.push(ch);  
        }
            else{
                if(st.empty()){
                    return false;
                }
                if((ch==')'&& st.top()=='(')||
                 (ch=='}' && st.top()=='{')||
                 (ch==']'&& st.top()=='['))
                    { st.pop();
                    }
                    else {
                        return false;

                    }
                }
            }
        return st.empty();
    }
    
    void longest_valid_parenthesis(string s){
        stack<int> st;
        st.push(-1);
        int max_length=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    max_length=max(max_length,i-st.top());
                }
            }
        }
        cout<<"longest valid parenthesis is "<<max_length<<endl;
    }

int main(){
    string s="({[]})";
    if(is_valid(s)){
        cout<<"valid"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }
    longest_valid_parenthesis(s);
    return 0;

}