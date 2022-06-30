#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
// int main()
// {
//     vector<int>v={10,5,30,40,90,8};
//     auto it1=max_element(v.begin(),v.end());
//     auto it2=min_element(v.begin(),v.end());

//     cout<<(*it1)<<" "<<(*it2)<<endl;

// }

struct Point{
    int x;int y;
    Point(int i,int j){
        x=i;y=j;
    }
};
bool myCmp(Point p1,Point p2)
{
    return p1.y<p2.y;
}
int main()
{
    vector<Point>v={{5,4},{2,300},{90,10}};
    auto it = max_element(v.begin(),v.end(),myCmp);
    cout<<((*it).x)<<" "<<((*it).y)<<endl;
      it = min_element(v.begin(),v.end(),myCmp);
    cout<<((*it).x)<<" "<<((*it).y)<<endl;

}