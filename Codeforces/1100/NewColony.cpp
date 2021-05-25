#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int last = 0;
	while(k > 0){
		bool roll = 0;
		for(int i = 0; i < n-1; i++){
			if(arr[i+1] > arr[i]){
				arr[i]++;
				last = i;
				roll = 1;
				break;
			}
		}
		if(!roll){
			last = -2;
			break;
		}
		k--;
	}

	cout << last+1 << endl;
}

int main(){
	int T;
	cin >> T;
	while(T--)
		solve();
}
