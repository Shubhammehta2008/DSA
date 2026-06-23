#include<iostream>
#include<stack>
#include<string>
#include<cctype>
using namespace std;

int applyop(int a,int b,char op){
    switch(op){
        case '+': return a+b;
        case '-': return a-b;  
        case '*': return a*b;
        case '/': return a/b;   
    }
    return 0;
}
int precedence(char ch ){
    if(ch =='^'){return 3;}
    else if(ch=='*'or ch=='/')return 2;
    else if(ch=='+'or ch=='-')return 1;
    else return -1;
}
int eval(string &str){
    stack<int> nums;
    stack<char> ops;
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])){
            nums.push(str[i]-'0');
        }
        else if(ch=='('){
            ops.push('(');
        }
        }
    }
}