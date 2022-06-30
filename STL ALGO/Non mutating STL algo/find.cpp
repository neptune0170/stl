#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={5,10,7,10,19,19,19,21};
   
   //FIND
    auto it =find(v.begin(),v.end(),10);
    
    if(it==v.end())
      cout<<"NotFound";
    else cout<<"Fount at"<< (it-v.begin());
   //LOWER BOUND  -> Returns an iterator having address of element greater than equal to given value in a given sorted range
   cout<<endl;
    sort(v.begin(),v.end());
    auto lb= lower_bound(v.begin(),v.end(),19); //uses binary search , sorting is reqireodd
   *lb= *lb--;
    cout<<(*lb);
    cout<<endl;


    // lower bound uses advance function internally   
    //  // advance function 
    // advance(it,5) -> moves it 5 steps ahead | it++ 5 times

    //UPPER BOUND
        auto ub= upper_bound(v.begin(),v.end(),19);
    cout<<(*ub);


return 0; 
}