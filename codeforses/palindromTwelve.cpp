#include<iostream>

using namespace std;
int yasno(int n){
    int p=0;
    while(p<=n){
int a=n-p;
int k=a;
p+=12;
int ld=0;
int r=0;
while(k!=0){
    ld=k%10;
    r=r*10;
    r=r+ld;
    k=k/10;
}
if(r==a){return a;}

    }
     return -1;
}
int main (){
     int n;
     cin>>n;
     int j= yasno(n);
  if(j==-1){cout<<j;}
  else{cout<<j<<" "<<n-j;}
    return 0;

}
