//find the next smaller element array in the give array 
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> NGE(vector<int>& arr){
int n= arr.size();
stack<int> st;
st.push(0);
vector<int> ans =arr;

for(int i=1 ;i<n;i++){
while( !st.empty() && arr[st.top()]>=arr[i]){       // change only this position 
ans[st.top()]= arr[st.top()]-arr[i];
st.pop();
}
st.push(i);
}

 return ans;
}
int main(){
    vector<int> arr={8,4,6,2,3};
    vector<int> ans= NGE(arr);

     for(int num:ans){
        cout<<num<<"  ";
     }
}