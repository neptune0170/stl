#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30};
    fill(v.begin(),v.end(),5);
    for(auto x:v)
    {
        cout<<x<<" ";
    }

}