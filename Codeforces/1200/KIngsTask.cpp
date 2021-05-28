#include<bits/stdc++.h>
using namespace std;

vector<int> v(100005);
vector<int> p(100005);

int n;

bool equal(){
	for(int i = 0; i < 2*n; i++){
		if(v[i] != p[i])
			return false;
	}
	return true;
}

bool det(){
	for(int i = 0; i < 2*n; i++){
		if(p[i] != i+1){
			return false; 
		}
	}
	return true;
}

void fst(){
	for(int i = 0; i < (2*n)-1; i+=2){
		int temp = p[i];
		p[i] = p[i+1];
		p[i+1] = temp;
	}
}

void snd(){
	for(int i = 0; i < n; i++){
		int temp = p[i];
		p[i] = p[i+n];
		p[i+n] = temp;
	}
}

int dfs(bool op, int curr){
	if(curr != 0 && equal())
		return -1;
	if(det())
		return curr;
	if(op)
		fst();
	else
		snd();
	return dfs(!op, curr+1);
}


int main(){
	cin >> n;
	for(int i = 0; i < 2*n; i++){
		cin >> v[i];
		p[i] = v[i];
	}

	int ans = dfs(1, 0);

	for(int i = 0; i < 2*n; i++)
		p[i] = v[i];

	int aux = dfs(0, 0);

	if(aux == -1 && ans == -1)
		cout << -1 << endl;
	else if(aux == -1 && ans != -1)
		cout << ans << endl;
	else if(aux != -1 && ans == -1)
		cout << aux << endl;
	else
		cout << min(aux, ans);
}
