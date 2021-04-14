#include<bits/stdc++.h>
using namespace std;

void solve(int n, int arr[]){
	map<int, int> m;
	for(int i = 0; i < n; i++)
		m[arr[i]]++;
	int k = m.begin()->first;
	for(auto const& x: m){
		if(x.second > m[k])
			k = x.first;
	}
	int sz = m.size() < m[k] ? m.size() : m.size()-1;
	cout << min(m[k], sz) << endl;
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