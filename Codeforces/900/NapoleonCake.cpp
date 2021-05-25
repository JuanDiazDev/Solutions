#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n] = {};
	for(int i = 0; i < n; i++){
		int c;
		cin >> c;
		int j = max(0, i-c+1);
		arr[j] = i-j+1;
	}
	int k = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] > k)
			k = arr[i];
		if(k > 0){
			if(i == n-1)
				cout << 1 << endl;
			else
				cout << to_string(1) + " ";
			k--;
		}else{
			if(i == n-1)
				cout << 0 << endl;
			else
				cout << to_string(0) + " ";	
		}

	}
}

int main(){
	int T;
	cin >> T;
	while(T--)
		solve();
}
