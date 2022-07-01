#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     vector<int>v={15,6,7,12,30};
     make_heap(v.begin(),v.end(),greater<int>());
     cout<<v.front()<<endl;
     
     pop_heap(v.begin(),v.end(),greater<int>());
     cout<<v.front()<<endl;
     v[4]=2;
     push_heap(v.begin(),v.end(),greater<int>());
     cout<<v.front()<<endl;
     sort_heap(v.begin(),v.end(),greater<int>());
    
     return 0;
     //make_heap will convert the normal container as a heap// prioroty queue
    
}