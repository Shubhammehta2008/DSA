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
  int nse2(vector<int> &arr){
    int n = arr.size();
    stack<int> st;
    int ans = 0; // Initialize with 0
    
    for(int i = 0; i <= n; i++){
        // Use n as height for elements remaining in stack at the end
        int currHeight = (i == n) ? 0 : arr[i];
        
        while(!st.empty() && currHeight < arr[st.top()]){
            int height = arr[st.top()];
            st.pop();
            int width = (st.empty()) ? i : (i - st.top() - 1);
            ans = max(ans, height * width);
        }
        st.push(i);
    }
    return ans;
}


    int main(){
        vector<int> arr={2,1,5,6,2,3};
        // vector<int> ans=nge(arr);
        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i]<<" ";
        // }
        

       
            cout<<nse2(arr)<<" ";
        
    return 0;
    }

