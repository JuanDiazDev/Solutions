#include<bits/stdc++.h>
using namespace std;


int rec(int n, int arr[], int dp[], int i){
	if(i >= n)
		return 0;
	if(dp[i] > 0)
		return dp[i];
	dp[i] = arr[i] + rec(n, arr, dp, i + arr[i]);
	return dp[i];

}

void solve(int n, int arr[]){
	int dp[n] = {};
	int ans = 0;
	for(int i = 0; i < n; i++){
		int curr = rec(n, arr, dp, i);
		ans = max(ans, curr);
	}
	cout << ans << "\n";
}


int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n ;i++)
			cin >> arr[i];
		solve(n, arr);
	}
}