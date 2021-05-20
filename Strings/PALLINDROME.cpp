//DSA 2
//String is Pallindrome or not

#include <iostream>
using  namespace std;

int main()
{
    string S;
    cout << "\nEnter the String: ";
    cin >> S;
    int i;
    int st = S.length()-1;
    for(i = 0;i<(st+1)/2;i++){
        if(S[i]!=S[st-i]){
            cout << "\nNo, It's not Pallindrome" << endl;
            break;
        }
        else{
            cout << "Yes, It's Pallindrome" << endl;
            break;
        }
    }
    return 1;
}
