//DAY 11
//Problem: Left rotation of array on the Hackerrank Platform (Problem Solving Section DSA)
#include  <iostream>
using  namespace std;
void rotation(int arr[], int n, int pos){
    int last = arr[pos];
    for(int i = pos;i>=0;i--){
      arr[i] = arr[pos-1];
      arr[pos] = last;
    }  
}
int main()
{
    int n, pos;
    cin >> n >> pos;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    rotation(arr, n, pos);
    for (int i = 0; i < n; i++)
        cout <<" "<< arr[i];
 
    return 0;
}  
