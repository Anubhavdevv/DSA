//DSA
//DAY 4
//Problem: A Program to check if strings are rotations of each other or not

#include<iostream>
using namespace std;

bool checkRotation(string s1, string s2) {

        if (s1.length() != s2.length()){ //comparing the length of two string
                return false; 
        }

        string temp; 
        temp = s1 + s1; //Concatenate the string 
        int n = temp.length();
        int m = s2.length();
        
        // checking if s2 is present in temp
        for(int i = 0; i<n-m; i++)
        {
            int flag = 1, j;
            for(j = 0; j < m-1; j++)
            {
                if(s2[j] != temp[i+j])
                {
                    flag = 0;
                    break;
                }
            }
            
            if(flag == 1){
                return true;// return true if s2 is present in temp
            }
        }
        
        return false;
}


int main() {
    string a, b;
    cout << "\nEnter first String: ";
    cin >> a;
    cout << "\nEnter Secon String: ";
    cin >> b;
    if (checkRotation(a, b))
        cout<<"\nGiven Strings are rotations of each other " << endl;
    else
        cout<<"\nGiven Strings are not rotations of each other "<< endl;
    return 0;
}
