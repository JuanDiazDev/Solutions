#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v(100005);

vector<int> arr(100005);

void dfs(int index, int group){
	if(arr[index] != 0)
		return;
	arr[index] = group;
	int b = group == 1 ? 2 : 1;

	for(auto i: v[index]){
		if(arr[index] == arr[i]){
			arr[index] = -1;
			return;
		}
		dfs(i, b);
	}
}

int main(){
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		v[a-1].push_back(b-1);
		v[b-1].push_back(a-1);
	}

	bool imp = false;

	for(int i = 0; i < n; i++){
		if(arr[i] == -1){
			imp = 1;
			break;
		}
		if(arr[i] != 0)
			continue;
		dfs(i, 1);
	}

	if(imp){
		cout << "IMPOSSIBLE" << "\n";
	}else{
		for(int i = 0; i < n; i++){
			if(i == n-1)
				cout << to_string(arr[i]) << "\n";
			else
				cout << to_string(arr[i]) + " ";
		}
	}

}