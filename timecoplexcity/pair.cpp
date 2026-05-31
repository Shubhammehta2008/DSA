#include <iostream>
using namespace std;
void explainpair ()
    {

        pair<int ,int > p ={1,3};
        cout<<p.first<<""<<p.second<<endl ;
        pair<int ,pair<int ,float>> pi={1,{2,3.5}};
        cout<<pi.second.second<<" "<<pi.first;
    }

int main(){
     explainpair();
    return 0;
}