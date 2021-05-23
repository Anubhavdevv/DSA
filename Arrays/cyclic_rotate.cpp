//Dsa 
//Day 5
//Problem: Program to cyclically rotate an array by one

/*Logic:
 1) Swapping With last element 
 2) Store Last Eleemnt in a then shift array and insert a at first postion
*/

#include  <iostream>
using  namespace std;
void rotation(int arr[], int n){
    int a = arr[n-1];
    for(int i = n-1;i>0;i--)
    arr[i] = arr[i-1];
    arr[0] = a;
}
int main()
{
    int n;
    cout << "\nEnter the Size of the array: ";
    cin >> n;
    int arr[n];
    cout <<"\nEnter the elements of the array: " << endl;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    rotation(arr, n);
    cout << "\nRotated array: \n";
    for (int i = 0; i < n; i++)
        cout <<" "<< arr[i];
 
    return 0;
}    
   
