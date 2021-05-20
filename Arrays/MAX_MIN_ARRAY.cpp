//DSA
//DAY 2
//Maximum and minimum of an array using minimum number of comparisons

#include<iostream>
using namespace std;
 
struct Pair{  //User defined data-type
    int min;
    int max; 
};
 
struct Pair MIN_MAX(int arr[], int n)
{
    struct Pair minmax;    
    int i;
    if (n == 1)  //if array has only 1 element
    {
        minmax.max = arr[0];  
        minmax.min = arr[0];    
        return minmax;
    }
     
    //BY LINEAR SEARCH

    if (arr[0] > arr[1]){

        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{

        minmax.max = arr[1];
        minmax.min = arr[0];
    }
     
    for(i = 2; i < n; i++)  //Starting loop from 2 element
    {
        if (arr[i] > minmax.max)    
            minmax.max = arr[i];
             
        else if (arr[i] < minmax.min)    
            minmax.min = arr[i];
    }
    return minmax;
}
 

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements of the array: \n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
        
    }
    cout << endl;
    struct Pair minmax = MIN_MAX(arr, n); 
    cout << "Minimum element is "<< minmax.min << endl;
    cout << "Maximum element is "<< minmax.max << endl;
          
    return 0;
}
 
