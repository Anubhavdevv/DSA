//DSA
//DAY 8
//Probelm: Given a number N, you have to output the number of integers less than N in the sample space S.

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int countSquares(int N) {
        int count = 0;
        for(int i =1;i*i<N;i++){
            count++;
        }
        return count;
        
        
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  

//APPROACH 2

int countSquares(int N) {
   return sqrt(N-1);
}
