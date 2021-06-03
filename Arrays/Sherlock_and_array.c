//DSA
//DAY 16
//Problem: Sherlock and Array

#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >>q;
    while(q--){
       int n, flag=0, sum=0, rsum=0;
       cin >> n;
       int arr[n];
       for(int i=0;i<n;i++){
           cin >> arr[i];
           sum=sum+arr[i];
       }
       for(int i =0 ;i<n;i++){
          if(rsum==(sum-rsum-arr[i])){
             cout << "YES\n";
             flag=1;
           }   
           rsum=rsum+arr[i];   
       }
       if(flag==NULL)
        cout << "NO\n";
    }
}
