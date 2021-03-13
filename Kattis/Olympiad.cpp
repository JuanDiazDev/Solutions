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
typedef  map<int,string>	     mis; 
typedef  pair<int,int> 	         pii; 
typedef  pair<string, int>       psi; 
typedef  pair<string, string>    pss; 
typedef  vector<int> 	         vi; 
typedef  vector<string> 	     vs; 
typedef  vector<char>	         vc; 
typedef  vector<bool>            vb; 
typedef  vector<pii>             vii;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin >> T;
  while(T>0){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a+b)>(c+d))
      cout << a+b << endl;
    else
      cout << c+d << endl;
    T--;
  }
  return 0;
}
