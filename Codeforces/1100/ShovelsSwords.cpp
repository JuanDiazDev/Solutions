#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int a, b;
		cin >> a >> b;
		int ans = (a+b)/3;
		ans = min(ans, min(a, b));
		cout << ans << endl;
	}
}