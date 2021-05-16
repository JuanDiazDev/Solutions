#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v(100005);
bool arr[100005] = {};

void dfs(int index){
	if(arr[index])
		return;
	arr[index] = true;
	for(int i = 0; i < v[index].size(); i++){
		dfs(v[index][i]);
	}
}

void solve(int n, int m){
	for(int i = 0; i < m; i++){
		int origin, destiny;
		cin >> origin >> destiny;
		v[origin-1].push_back(destiny-1);
		v[destiny-1].push_back(origin-1);
	}

	vector<int> heads;

	for(int i = 0; i < n; i++){
		if(arr[i])
			continue;
		dfs(i);
		heads.push_back(i);
	}

	cout << heads.size()-1 << "\n";

	for(int i = 0; i < heads.size()-1; i++){
		cout << to_string(heads[i]+1) + " " + to_string(heads[i+1]+1) << "\n";
	}


}

int main(){
	ios_base::sync_with_stdio(0);
  	cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;

	solve(n, m);
}