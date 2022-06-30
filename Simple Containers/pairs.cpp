#include<iostream>
#include<utility>
using namespace std;
// int main()
// {
//     // pair<int,string>p1(10,"gse");

//     // pair<int,string>p1;
//     // p1={10,"gse"};

//     pair<int,string>p1;
//     p1=make_pair(10,"ges");

//     cout<<p1.first<<" "<< p1.second<<" ";
    
// }

int main()
{
    pair<int,int>p1(11,12),p2(9,99);
    cout<<(p1==p2)<<" "<<(p1!=p2) <<" "<< (p1>p2)<<" "<<(p1<p2);
}
