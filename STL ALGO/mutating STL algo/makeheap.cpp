#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     vector<int>v={15,6,7,12,30};
     make_heap(v.begin(),v.end());
     cout<<v.front()<<endl;
     return 0;
     //make_heap will convert the normal container as a heap// prioroty queue
    
}