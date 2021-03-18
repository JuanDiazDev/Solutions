#include<bits/stdc++.h>
using namespace std;

bool same(int arr[]){
	return (arr[0] == arr[1]) && (arr[1] == arr[2]);
}

void solve(int n, vector<int> v){
	int arr[3] = {0, 0, 0};
	for(int i = 0; i < n; i++){
		if(v[i] % 3 == 0)
			arr[0]++;
		else if(v[i] % 3 == 1)
			arr[1]++;
		else
			arr[2]++;
	}
	int ans = 0;
	while(!same(arr)){
		for(int i = 0; i < 3; i++){
			if(arr[i] > n/3){
				arr[i]--;
				ans++;
				arr[(i+1) % 3]++;
			}
		}
	}
	cout << ans << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T > 0){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		solve(n, v);
		T--;
	}
}