#include<bits/stdc++.h>
using namespace std;


void dfs(vector<vector<bool>> &v, int i, int j, int n, int m){
	if(i < 0 || i >= n || j < 0 || j >= m)
		return;
	if(v[i][j])
		return;
	v[i][j] = true;
	dfs(v, i+1, j, n, m);
	dfs(v, i, j+1, n, m);
	dfs(v, i-1, j, n, m);
	dfs(v, i, j-1, n, m);
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<bool>> v(n);
	for(int i = 0; i < n; i++){
		v[i] = vector<bool> (m);
		for(int j = 0; j < m; j++){
			char c;
			cin >> c;
			if(c == '#')
				v[i][j] = true;
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(!v[i][j]){
				dfs(v, i, j, n, m);
				ans++;
			}
		}
	}
	cout << ans << "\n";
}