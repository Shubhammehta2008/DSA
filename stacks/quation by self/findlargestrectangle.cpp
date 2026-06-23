#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int largestRectangleArea(vector<int>& height){
    stack<int> st;
    int max_area =0;
    int n=height.size();
  for(int i=0;i<=n;i++){
    int current_height;
    if(i==n){
        current_height=0;
        else{
            current_height=height[i];
        }
        while(!st.empty()&& current_height<height[st.top()]){
            int h =heights[st.top()];
            st.pop();


            int width;
            if(st.empty()){
            
                width =i;
            }else{
                width=i-st.top()-1;
            }
            int area=h*width;
            if(area>max_area){
                max_area=area;
            }
        }
     st.push(i);
    } 
    return max area;
 }


}