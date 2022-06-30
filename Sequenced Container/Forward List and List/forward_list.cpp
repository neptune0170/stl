 #include<iostream>
 using namespace std;
 #include<forward_list>
 int main()
 {
    //forward list is a singly linked list
    //list is a doubly linked list

    forward_list<int>l={10,5,20};
    l.push_front(5); // 5->10->5->20
    l.push_front(3); // 3->5->10->5->20
    l.pop_front(); // 5->10->5->20

    for(int &x :l)
    {
              cout<<x<<" ";
    }
   //---------------------------------------------- 
    cout<<endl;
    forward_list<int>lo;
    // lo.assign(3,10); 10->10->10
    lo.assign({10,20,30,40});
    lo.remove(10); //20->30>40
    // lo.sort();
    lo.reverse(); // 40->30->20
    for(auto it=lo.begin();it!=lo.end();it++)
    {
        cout<<(*it)<<" ";  
    }

    //---------------------------------------------
    forward_list<int>l1={15,20,30};
    auto it = l1.insert_after(l1.begin(),10);
    it=l1.insert_after(it,{2,3,5});
    it = l1.emplace_after(it,40);
    it=l1.erase_after(it);



    //More functions

    // clear()
    // empty()
    // reverse()
    // merge()  l1.merge(l2);
    // sort()










    return 0;
    



 

 }