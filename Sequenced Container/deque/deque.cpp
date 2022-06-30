//deque is a doubly ended queue it can work as both 
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>dq={10,20,30};
    dq.push_front(5);
    dq.push_back(50);
    for(auto x:dq)
    {
        cout<<x<<" ";
    }

cout<<dq.front()<<" "<< dq.back()<<" "<<dq.size();

  //more fucntion
//   insert()
// pop_front()
// pop_back()

}
//deques operation are o(1) , with random access
//doubly linked list also have o(1) complexity , but do not have random acces
