#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int>v={10,20,30,40,50};
    // iterator 
    
    vector<int>::iterator i =v.begin(); //|| auto i = v.begin();
    i=next(i); 
    cout<<*i;  // 20
     i=prev(i);
    cout<<*i;  //10
    i = next (i,2);
    cout<< *i; // 30
      i=prev(i,1);
    cout<<*i;  //20
    cout<<endl;
   i = v.begin();
    advance(i,3);
    cout<<*i;//40

}