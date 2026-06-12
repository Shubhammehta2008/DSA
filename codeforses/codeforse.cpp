#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
    int p;
    cin>>p;
    vector<string> num(p);
    for(int i=0;i<p;i++){
    cin >> num[i];
}
for(int i=0;i<p;i++){
    int n = num[i].size();
    if(n>10){
        num[i]=string(1,num[i][0])+to_string(n-2)+num[i][n-1];
        }
}
for(int i=0;i<p;i++){
    cout << num[i] << endl;}
    return 0;
}