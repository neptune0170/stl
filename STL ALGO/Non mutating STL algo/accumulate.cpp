#include<iostream>
#include<numeric>
#include<bits/stdc++.h>
using namespace std;


int myfun(int x,int y)
{
    return x*y;
}
int main()
{
    vector<int>v={10,20,30};
    int init_res=0;
     
     cout<<accumulate(v.begin(),v.end(),init_res)<<endl;

    int init_sub=100;
     
     cout<<accumulate(v.begin(),v.end(),init_sub,minus<int>())<<endl;

    
    int init_mum=1;
    cout<<accumulate(v.begin(),v.end(),init_mum,myfun);





}
//accumulate initially sums the vector range