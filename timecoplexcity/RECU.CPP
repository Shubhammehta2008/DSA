#include<iostream>
using namespace std;
  int f(int x ,int y)
  {
    if(x<(y/2)) {
       int  temp =x;
       x= y;
       y=temp;
     f(x+1,y-1);

  }
  }
int main ()
{   int arr[9]={2,6,5,8,6,9,7,5,2,};

 f(arr[0],arr[9]);
 for( int i=0;i<=9;i++)
cout<<arr[i]<<endl;


    return 0;

}





