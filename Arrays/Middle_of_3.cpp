//DSA
//DAY 8
//Problem: Given three distinct numbers A, B and C. Find the number with value in middle

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int middle(int A, int B, int C){
        if(B<max(A,C) && B>min(A,C)){
             return B;
        }
        else if(A<max(B,C) && A>min(B,C)){
              return A;
        }
        else{
            return C;
        }
            
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  
