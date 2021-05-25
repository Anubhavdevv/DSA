//DSA
//DAY 2
//Insertion sort

#include  <iostream>
using  namespace std;

int main()
{
    int i=0, j, temp, a;
    int n;
    cout << "\nEnter the size of the array: "<<endl;
    cin >> n;
    int arr[n];
    cout <<"\nEnter the elements in the array: "<<endl;
    for(i = 0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n-1;i++){
        temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    cout <<"\nSorted array: "<<endl;
    for(i = 0; i<n; i++){
        cout << " " << arr[i];
    }
    return 0;
}
