#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
 int n;
 int ans=0;
 cin>>n;


 for(int i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c>1){
        ans++;
    }

 }
 cout<<ans<<endl;

    return 0;
}