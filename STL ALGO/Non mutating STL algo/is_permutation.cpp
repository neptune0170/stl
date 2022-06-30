//is_permutation check if 2 numbers are permutation of each other or not
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1={10,20,30,5};
    vector<int>v2={20,10,5,30};
    if(is_permutation(v1.begin(),v1.end(),v2.begin())){
        cout<<"Yes"<<endl;

    }
    else cout<<"No"<<endl;
}