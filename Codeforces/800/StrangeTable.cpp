#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int T;
	cin >> T;
	while(T--){
		long long n, m, x;
		cin >> n >> m >> x;
		long long a = 0, b = 0;
		a = x / n + (x % n > 0);
		b = x % n;
		if(b == 0)
			b = n;
		unsigned long long ans = b * m;
		ans -= abs(a - m);
		cout << ans << "\n";
	}
	return 0;
}
