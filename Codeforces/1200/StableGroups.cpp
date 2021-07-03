#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long k, x;
	cin >> n >> k >> x;

	vector<long long> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	vector<long long> diff;
	for(int i = 1; i < n; i++){
		long long d = v[i] - v[i-1];
		if(d > x)
			diff.push_back(d);
	}

	sort(diff.begin(), diff.end());

	int m = diff.size()+1;

	for(int i = 0; i < diff.size(); i++){
		long long fill_gap = diff[i]/x + (diff[i] % x != 0) - 1;
		if(fill_gap > k)
			break;
		k -= fill_gap;
		m--;
	}

	cout << m << endl;
}
