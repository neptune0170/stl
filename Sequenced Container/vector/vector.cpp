#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
    // vector<int>v;
    // v.push_back(10);
    // for(int i=0;i<v.size();i++)
    // {  
    //      cout<<v[2]<<" ";
    //     //  cout<<v.at(2)<<" ";
    // }

//vector initialization
// int n=3,x=10;
// vector<int>v(n,x); //v[]={10,10,10} 


//array
int arr[]={10,5,20};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int> v(arr,arr+n);
for(auto it=v.rbegin();it!=v.rend();it++)

{
    cout<<(*it)<<" ";
}


}