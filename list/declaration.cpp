#include<list>
#include<iostream>
using namespace std; 
    int main(){
        list<int> mylist1{1,2,3,4,5,6,7};  // Create an empty list of integers
        mylist1.push_back(10);  // Add elements to the list
     auto itr = mylist1.begin();  // Get an iterator to the beginning of the list
        cout << "Elements in the list: ";
        for( auto itr = mylist1.begin(); itr != mylist1.end(); ++itr){
            cout << *itr << " ";
        }
        advance(itr, 2);  // Move the iterator back to the last element
        cout << "\nElement at the moved position: " << *itr << endl;
       //reverse traversal
       cout << "Elements in reverse order: ";
       for(auto it = mylist1.rbegin(); it != mylist1.rend(); ++it){
           cout << *it << " ";
       }
       cout << endl;

     
        return 0;
    }