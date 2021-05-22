//DSA
//DAY 4
//Problem: Move all negative numbers to beginning and postive to end with constant extra time 
//Logic: partition process of quicksort

#include  <iostream>
using  namespace std;


void neg_first(int arr[],int n){
   int j =0, temp=0; //For Swapping the element of array 
   cout << "\nEnter the elements of the array: "<< endl;
   for(int i =0;i<n;i++){
       cin >> arr[i];
       if(arr[i]<0){
           if(i!=j){
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
           j++;
       }
   }
}

void print_arr(int arr[], int n){
   cout << "\nAfter Shifting: " << endl;
   for(int i =0;i<n;i++){
       cout << arr[i] << " ";
   }
}

int main()
{
   int n;
   cout << "\nEnter the size of the array: "; 
   cin >> n;
   int arr[n];
   neg_first(arr, n);
   print_arr(arr, n);
   cout << "\n\nSpace Complexity is O(1)" << endl;
   cout << "Time Complexity is O(n)" << endl;
}
