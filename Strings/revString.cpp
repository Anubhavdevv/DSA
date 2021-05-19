//DSA
//DAY 1: String
//REVERSE String

#include <bits/stdc++.h>
using  namespace std;

int main()
{
  string str; 
  int n;    
  string st = ""; //Create empty String
  cout << "Enter the string: \n";
  cin >> str; //User Input the string 
  for(int i = str.length()-1;i>=0;i--){
      st = st + str[i]; 
  }
  cout << "\nReversed string: \n";
  cout << st << endl;  //Printing the reverse string 
}
