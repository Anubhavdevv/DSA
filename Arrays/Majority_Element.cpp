//DSA
//DAY 9
//Problem: Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
   
    int majorityElement(int a[], int size)
    {
        
        int i=0, count=1;
        sort(a,a+size);
        if(size==1){
            return a[0];
        }
        for(i=0;i<size-1;i++){
          if(a[i]==a[i+1]){
            count++;
          }
          else{
            count = 1;
          }
          if(count > size/2){
            return a[i];
          }
        }
    return -1;
    }
        
};



int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
