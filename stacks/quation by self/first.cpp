//find the next gratter element array in the give array 
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> NGE(vector<int>& arr){
int n= arr.size();
stack<int> st;
st.push(0);
vector<int> ans(n,-1);

for(int i=1 ;i<n;i++){
while( !st.empty() && arr[st.top()]<arr[i]){
ans[st.top()]=arr[i];
st.pop();
}
st.push(i);
}

 return ans;
}
int main(){
    vector<int> arr={4,5,6,3,2,6,4,1};
    vector<int> ans= NGE(arr);

     for(int num:ans){
        cout<<num<<"  ";
     }
}