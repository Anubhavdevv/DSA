#include  <iostream>
using namespace std;
//BubbLe SoRT
int main()
{
   int i = 0, j, n, temp, flag;
   cout << "Enter the size of the array: ";
   cin >> n;
   cout << endl;
   int arr[n];
   cout << "Enter the array: \n";
   for(i = 0; i<n; i++){
       flag = 0;
       cin >> arr[i];
   } 

   for(i = 0; i<n-1; i++){
       for(j=0;j<n-1-i;j++){
           if(arr[j]>arr[j+1]){
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
               flag = 1;
           }
       }
       if(flag==0){
            break;
       }
   }
   cout << endl <<"Optimized Bubble sort: "<<endl;
   for(i = 0; i<n; i++){
       cout <<arr[i]<<endl;
   }
   cout << endl;
   cout << "Time complexity in best case is: O(n)"<<endl;
   cout << "Time complecity in worst case is: O(n^2)"<<endl; // Because first loop run on n-1 time and the inner loop continues to n-1 times so as it is a polynomail function the highest degree of n is the time complexity and it is in worst case that time complexity is O(n2);
   return 0;
}
