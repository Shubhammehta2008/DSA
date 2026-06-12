#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> nge(vector<int> &arr){
   int n =arr.size();
   vector<int> ans(n,-1);
   stack<int> st; 
   st.push(0);
   for(int i=1;i<n;i++){
    while( !st.empty() && arr[st.top()]<arr[i]){
        ans[st.top()]=arr[i];
        st.pop();
    }
    st.push(i);
   }
   return ans;
}
  vector<int> nge2(vector<int> &arr){
   int n =arr.size();
   reverse(arr.begin(),arr.end());
   vector<int> ans(n,-1);
    stack<int> st;
    for(int i=1;i<n;i++){
        while( !st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=i-st.top();
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


    int main(){
        vector<int> arr={4,5,2,10,8};
        vector<int> ans=nge(arr);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

        vector<int> ans2=nge2(arr);
        for(int i=0;i<ans2.size();i++){
            cout<<ans2[i]<<" ";
        }
        cout<<endl;
    }