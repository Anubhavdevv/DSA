//DSA
//DAY 10
//PRoblem: Rest in peace - 21-1 on string!

#include <bits/stdc++.h>
using namespace std;

string print_str(int num){
	string s1 = "The streak lives still in our heart!";
    string s2 = "The streak is broken!";
	if(num%21==0){
		return s2;
	}
	while(num!=0){
		if(num%100==21){
			return s2;
		}
		num=num/10;
	}
	return s1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int caase;
	cin >> caase;
	while(caase--){
	  int num;
	  cin >> num;              			// Reading input from STDIN
      cout << print_str(num) <<endl;
	}  
}
