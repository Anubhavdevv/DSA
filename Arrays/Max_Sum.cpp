//DSA
//DAY 10
//Problem: Maximum Sum

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll num, sum = 0, count = 0, max=0;
	cin >> num;
	ll arr[num];
	for (int i = 0; i < num; i++) {
	    cin >> arr[i];
	    if (arr[i] >= 0) {
			sum = sum + arr[i];
			count++;
		}

	}
	if(sum==0 && count==0){
	  max=arr[0];
	  for(int i=1;i<num;i++){
      if(max<arr[i])
         max=arr[i];
      }
      cout<<max<<" "<<"1";
    }
    else{
       cout<<sum<<" "<<count;
    }
	return 0;							
}		
