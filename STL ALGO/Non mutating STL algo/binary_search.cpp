#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x;int y;
    Point(int i,int j)
    {
        x=i;
        y=j;
    }
};
bool myCmp(Point p1,Point p2){return p1.x<p2.x;}
int main()
{
    vector<Point>v={{10,5},{2,100},{50,90}};
    sort(v.begin(),v.end(),myCmp);
    Point p(2,100);
    if(binary_search(v.begin(),v.end(),p,myCmp))
       cout<<"FOund";
    else cout<<"Not found";

}

//it will only check x values because only x in compared in my Cmp