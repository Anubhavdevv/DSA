//DSA
//DAY 1: Array
//REVERSE Array

#include <bits/stdc++.h>
using  namespace std;

int main()
{ 
  
  int n, i, temp, j;
  cout << "Enter the size of array: ";
  cin >> n;
  int arr[n];
  cout <<"\nEnter the elements:  \n";
  for(i = 0 ;i<n;i++){
      cin >> arr[i];    
  }  
  j=n-1; 
  for(i=0; i<j; i++, j--) //For SWapping The elements
  {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
  }
  cout << "\nReversed Array: \n";
  for(i = 0 ;i<n;i++){
      cout << arr[i] << " ";
  }   
  return 0;
}  
