#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{10,5,20,15};
    v.pop_back();
    for(int x : v)
    {
        cout<<x<< " ";
    }
    cout<<v.front()<<" ";
    cout<<v.back()<<" ";
    cout<<endl;
    vector<int>v2;
    v2.insert(v2.begin(),v.begin(),v.begin()+3);
    for(int x : v2)
    {
        cout<<x<< " ";
    }
    cout<<endl;

    // v2.erase(v2.begin());
    v2.erase(v2.begin(),v2.end()-1);

    for(int x : v2)
    {
        cout<<x<< " ";
    }
    cout<<endl;

    //to remove all elements from vector we can use v.clear()
    if(v.empty()==true)
    {
        cout<<"Empty"<<"";
    }
   //Resize
    v2.resize(4);
    cout<<v2.size();
    return 0;



}