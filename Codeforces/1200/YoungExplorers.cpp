#include<bits/stdc++.h>
using namespace std;

void solve(int n, int arr[]){
	sort(arr, arr + n);
	int ans = 0, curr = 1;
	for(int i = 0; i < n; i++){
		if(curr == arr[i]){
			ans++;
			curr = 0;
		}
		curr++;
	}
	cout << ans << endl;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		solve(n, arr);
	}
}