#include<bits/stdc++.h>
using namespace std;

int mexset(unordered_set<int> set, int start){
	while(set.find(start) != set.end())
		start++;
	return start;
}

int maxset(unordered_set<int> set){
	int max = 0;
	for(auto it = set.begin(); it != set.end(); it++){
		if(*it > max)
			max = *it;
	}
	return max;
}

void solve(int n, int k, unordered_set<int> set){
	int max = maxset(set);
	int mex = mexset(set, 0);
	int agg = 0;
	while(k--){
		int op = (max+mex+1)/2;
		set.insert(op);
		if(mex > max){
			agg = k;
			break;
		}
		if(op > max || op == mex){
			if(op > max)
				max = op;
			if(op == mex)
				mex = mexset(set, op+1);
		}else{
			break;
		}
	}
	cout << set.size() + agg << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int n, k;
		cin >> n >> k;
		unordered_set<int> set;
		for(int i = 0; i < n; i++){
			int j;
			cin >> j;
			set.insert(j);
		}
		solve(n, k, set);
	}
}