#include<bits/stdc++.h>
using namespace std;

void solve(int n, int m, int arr[], int a[]){
	int r = 0, b = 0;
	int curr = 0;
	for(int i = 0; i < n; i++){
		curr += arr[i];
		if(curr > r)
			r = curr;
	}
	curr = 0;
	for(int i = 0; i < m; i++){
		curr += a[i];
		if(curr > b)
			b = curr;
	}
	cout << r+b << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n ; i++)
			cin >> arr[i];
		int m;
		cin >> m;
		int a[m];
		for(int i = 0; i < m; i++)
			cin >> a[i];
		solve(n, m, arr, a);
	}
}