//DSA
//DAY 5
//Sorting: Selection Sort

#include  <iostream>
using  namespace std;

int main()
{
    int i,j,n,min;
    cout << "\nEnter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements of array: " << endl;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n-1;i++){
       min = i;
       for(j=i+1;j<n;j++){
           if(arr[j]<arr[min])
              min = j; 
       }
       swap(arr[min],arr[i]);
    }
    cout << "\nSorted Array: " << endl;
    for(i=0;i<n;i++){
        cout << " " << arr[i];
    }
    return 0;
}

/*Worst Case Time Complexity [ Big-O ]: O(n2)

Best Case Time Complexity [Big-omega]: O(n2)

Average Time Complexity [Big-theta]: O(n2)

Space Complexity: O(1)
*/
