#include<iostream>
using namespace std;
  int numberOfSpecialChars(string word) {
        int count=0;
        int k=0;
        while(word[k]!='\0'){
            if(122<word[k] || word[k]<96)
               { count++;}
            k++;
        }
   return count;
    }
int main(){
vector<int>> triplet=
char str[]="abBCab";
int size=0;
int k=0;
while(str[k]!='\0'){
    size++;
    k++;
}
// for(int i=0,j=size-1;i<=j;i++,j--)
// {char temp=str[i];
// str [i]=str[j];
// str[j]=temp;
// }
cout<<str<<endl;
cout<<numberOfSpecialChars(str)<<endl;
    return 0;

}