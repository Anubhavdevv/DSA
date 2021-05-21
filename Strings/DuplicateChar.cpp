#include <bits/stdc++.h>
#define no_of_char 256
using namespace std;
void printDuplicates(string s)
{
    int count[no_of_char] = {};  //Empty character array 
    for(int i=0; i<s.size(); i++)
      count[s[i]]++;   //increment the count of each character by using ASCII of character as key  
    for(int i=0; i<s.size(); i++){
      if(count[s[i]] > 1){
          cout << "\nDuplicate character: ";
          cout << s[i] << endl; 
          cout << "Count = " << count[s[i]];
          count[s[i]] = 0;
          break;
      }
      else{
          cout << "\nNo Duplicate character found";
          break;
      }
    }  
}
int main()
{ 
  string s;
  cout << "\nEnter the string: ";
  cin >> s;
  printDuplicates(s);
}
