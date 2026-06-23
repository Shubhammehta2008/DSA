#include <iostream>
#include <math.h>
#include<stack>
using namespace std;
int calc(int v1,int v2,char op){
    if(op ='^'){
        return pow(v1,v2);
    }
    if(op='/'){
        return v1/v2;
    }
     if(op='*'){
        return v1*v2;
    }
     if(op='+'){
        return v1+v2;
    }
    
        return v1-v2;
    
}

int eval(string &str){
    stack<int> st;
    stack<char> ops;
    for(int i=0;i<str.size();i++){
        if(isspace(str[i])) continue;
        char ch=str[i];
       if (isdigit(str[i])) {
            int val = 0;
            while (i < str.size() && isdigit(str[i])) {
                val = (val * 10) + (str[i] - '0');
                i++;
            }
            values.push(val);
            i--; 
        }
        
        else if(str[i]=='('){
            ops.push(str[i]);
        }
        else if(str[i]==')'){
            while(!ops.empty()&& ops.top()!='('){
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();
            st.push(calc(v1,v2,ch));
        }
    }
    else {
        ops.push(str[i]);
    }
}
int
    return st.top();
    }

    int infix( string str){
        stack<int> st;
      for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        if(ch==')'){
            int val1= st.top();
            st.pop();
            char op = st.top();
            st.pop();
            int val2= st.top();
            st.push(val1,val2,op)
        }
        else{
            st.push(ch);
        }
    }
    while(!st.empty()){
        int val2=st.top();st.pop();
        int val1=st.top();st.pop();
        char op=ops.top();ops.pop();
        valst.push(calc(val1,val2,op));
    }
return st.top();
    }

int main (){
    string str="231*+9-";
    cout<<eval(str);
    return 0;
}