//DSA
//DAY 7
//PROBLEM: Insert the element at specific position in array
#include<iostream>
using namespace std;
int main(){
    int size,pos,i,num,n;
    cout << "Enter the size of the array: ";
    cin >> size;
    int a[size];
    cout << "Enter the elements in the array: "<< endl;
    for(i=0;i<size;i++){
        cin >> a[i];
    }
    cout << "\n" << "Enter the psotion: ";
    cin >> pos;
    cout << "\n" << "Enter the number: ";
    cin >> num;
    if(pos<=0 || pos>size+1){                          //Bound on Position Condition
        cout << "Invalid Position";
    }
    else{
      for(i=size-1;i>=pos-1;i--){
         a[size]=a[pos-1];
      }
      //a[size]=a[pos-1];
      a[pos-1]=num;
      cout << "\n" << "After inserting the element: ";
      for(i=0;i<=size;i++){
        cout << "\n" << " "<< a[i];     
      }
    }  
    return 0;

}
