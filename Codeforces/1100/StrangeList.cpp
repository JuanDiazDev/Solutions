#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, x;
	cin >> n >> x;
	vector<vector<int>> v(n, vector<int> (2));
	for(int i = 0; i < n; i++){
		cin >> v[i][0];
		v[i][1] = 1;
	}
	long long sum = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i][0] % x != 0)
			break;
		vector<int> ele(2);
		ele[0] = v[i][0] / x;
		ele[1] = v[i][1] * x;
		v.push_back(ele);
	}

	for(auto vec: v){
		sum += vec[0]*vec[1];
	}

	cout << sum << endl;

}

int main(){
	int T;
	cin >> T;
	while(T--)
		solve();
}
