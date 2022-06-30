#include<iostream>
using namespace std;
template<typename T>
// T myMax(T x, T y)
// {
//     return (x>y)?x:y;
// }

// int main()
// {
//     cout<<myMax<int>(3,7)<<endl;
//     cout<<myMax<string>("bcx","bcd")<<endl;

// }


//template function
// T arrMax(T arr[],int n)
// {
//     T res =arr[0];
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>res)
//         {
//             res=arr[i];
//         }
//     }
//     return res;
// }
// int main()
// {
//     int arr[]={10,40,3};
//     cout<<arrMax<int>(arr,3)<<endl;
//     float arr2[]={10.5,11.5,111.1};
//     cout<<arrMax<float>(arr2,3);
    
// }

//template class
 struct Pair{
    T x, y;
    Pair(T i, T j){x = i; y = j;}
    T getFirst(){return x;}
    T getSecond(){return y;}
};

int main()
{
    Pair <int> p1(10, 20);
    cout << p1.getFirst() << " " << p1.getSecond();
    return 0;
}