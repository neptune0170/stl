#include<iostream>
#include<list>
using namespace std;
int main()
{
    // list<int>l;
    // l.push_back(10);
    // l.push_back(20);
    // l.push_front(5);

    // for(auto x:l)
    // {cout<<x<<" ";}; //5<=>10<=>20
    
    list<int>l={10,20,30};
    auto it = l.begin();
    it++;
    it=l.insert(it,15); //10<=>15|<=>20<=>30
    l.insert(it,2,7);  //10<=>7|<=>7<=>15<=>20<=>30
    cout<<l.front()<<" "<<l.back();
    cout<<endl<<l.size();


    //MORE FUNCTION
    // earse() /iterator
    //remove() /int
    //merge()
                                              //10 20 20 30 20           
    //unique() ->remove consicutive duplicates  // 10 20 30 20 
    //sort()
    //reverse() 




     return 0;
    

}