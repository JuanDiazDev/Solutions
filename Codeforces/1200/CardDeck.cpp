#include<bits/stdc++.h>
using namespace std;

void solve(int n, int arr[]){
	vector<int> v;
	bool B[n] = {};
	priority_queue<int> p;
	for(int i = n; i >= 1; i--)
		p.push(i);
	for(int i = n-1; i >= 0; i--){
		stack<int> s;
		for(int j = i; j >= 0; j--){
			s.push(arr[j]);
			B[arr[j]-1] = true;
			if(arr[j] == p.top()){
				while(!p.empty() && B[p.top()-1]){
					p.pop();
				}
				i = j;
				break;
			}
		}
		int size = s.size();
		for(int k = 0; k < size; k++){
			v.push_back(s.top());
			s.pop();
		}
	}
	for(int i = 0; i < n; i++){
		if(i == n - 1)
			cout << v[i] << "\n";
		else
			cout << to_string(v[i]) + " ";
	}

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