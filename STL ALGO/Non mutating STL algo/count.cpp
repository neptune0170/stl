// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // vector<int>v={30,20,5,10,10,10};
//     // cout<<count(v.begin(),v.end(),10);

//     string s= "timistim";
//     cout<<count(s.begin(),s.end(),'t');


//     return 0;
// }
// Simple C++ program to count occurrences
// of pat in txt.
#include<bits/stdc++.h>
using namespace std;
  
int countFreq(string &pat, string &txt)
{
    // int M=pat.length();
    // int N=txt.length();
    // int res=0;
    // for(int i=0;i<=N-M;i++)
    // {
    //     int j;
    //     for(j=0;j<M;j++)
    //     {
    //         if(txt[i+j]!=pat[j])
    //         {
    //             break;
    //         }
    //     }
    //     if(j==M)
    //     {
    //         res++;
    //     }

    // }
    // return res;

    

}
   
/* Driver program to t]]est above function */
int main()
{
   string txt = "dhimanman";
   string pat = "man";
   cout << countFreq(pat, txt);
   return 0;
}