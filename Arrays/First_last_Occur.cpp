#include  <iostream>
using  namespace std;

int first(int arr[], int n, int num)
{
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (num == arr[mid])
        {
            result = mid;
            high = mid - 1;
        }
        else if (num < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}
int Last(int arr[], int n, int num)
{
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high)
    {
       
        int mid = (low + high)/2;
        if (num == arr[mid])
        {
            result = mid;
            low = mid + 1;
        }
        else if (num < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}
int main()
{
   int n;
   cout << "\nEnter the size of the array: ";
   cin >> n;
   int arr[n];
   cout << "\nEnter the Target element: ";
   int num;
   cin >> num;
   cout << "\nEnter the elements in array: "<< endl;
   for(int i=0;i<n;i++){
       cin >> arr[i];
   }
   int index = first(arr, n, num);
   int inx = Last(arr, n, num);
   if(index != -1 || inx != -1){
       cout << "\nFirst Occurence at index: "<< index << endl << "Last OCcurence at index: " << inx << endl;
   }
   else{
       cout << "No";
   }
   return 0;
}
