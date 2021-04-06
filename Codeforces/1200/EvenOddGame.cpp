#include<bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> v){
	sort(v.begin(), v.end());
	long long res = 0;
	bool alice = true;
	for(int i = n-1; i >= 0; i--){
		if(alice && v[i] % 2 == 0)
			res += v[i];
		else if(!alice && v[i] % 2 == 1)
			res -= v[i];
		alice = alice ? false : true;
	}
	if(res > 0)
		cout << "Alice" << "\n";
	else if(res < 0)
		cout << "Bob" << "\n";
	else
		cout << "Tie" << "\n"; 

}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n ;i++)
			cin >> v[i];
		solve(n, v);
	}
}