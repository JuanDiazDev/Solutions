#include<bits/stdc++.h>
using namespace std;

#define ff   first
#define ss   second 
#define mp   make_pair
#define pb   push_back
#define endl "\n"

typedef  long long int           ll; 
typedef  map<string,int>         msi; 
typedef  map<int,int>	         mii; 
typedef  map<ll, ll>             mll; 
typedef  map<char,int>           mci; 
typedef  map<int,string>	 mis; 
typedef  pair<int,int> 	         pii; 
typedef  pair<string, int>       psi; 
typedef  pair<string, string>    pss; 
typedef  vector<int> 	         vi; 
typedef  vector<string> 	 vs; 
typedef  vector<char>	         vc; 
typedef  vector<bool>            vb; 
typedef  vector<pii>             vii;

bool cmp(pii p, pii q){
  if(p.first == 0)
    return (p.second < q.second);
  return (p.first < q.first);
}

void solve(int n, vii m, vii d){
  sort(m.begin(), m.end(), cmp);
  sort(d.begin(), d.end(), cmp);
  double ans = 0;
  for(int i = 0; i < n; i++){
    ans += sqrt((pow(m[i].second, 2) + pow(d[i].first, 2))); 
  }
  cout << setprecision(13);
  cout << ans << endl;
  
}


int main(){
  int T;
  cin >> T;
  while(T > 0){
  	int n;
    cin >> n;
    vii m;
    vii d;
    for(int i = 0; i < 2*n; i++){
      int x, y;
      cin >> x >> y;
      if(x == 0){
	if(y < 0)
	  y *= -1;
	m.pb(mp(x, y));
      }else{
	if(x < 0)
	  x *= -1;
	d.pb(mp(x, y));
      }
    }
    solve(n, m, d);
    T--;
  }
}
