#include<bits/stdc++.h>
using namespace std; 

#define ff   first
#define ss   second 
#define mp   make_pair
#define pb   push_back
#define endl "\n"


typedef  pair<int,int> 	         pii; 
typedef  vector<pii>             vii;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin >> T;
  while(T > 0){
    int a, b;
    cin >> a >> b;
    string str;
    cin >> str;
    int len = str.size();
    char* s = &str[0];
    vii v;
    for(int i=0;i<len;i++){
      if(s[i] != '1')
	continue;
      for(int j=i;j<len;j++){
	if(s[j] != '1'){
	  v.pb(mp(i, j-1));
	  i = j;
	  break;
	}else if(s[j]=='1' && j==len-1){
	  v.pb(mp(i, j));
	  i = j;
	}
      }
    }
    int diff;
    int res = 0;
    int tam = v.size();
    if(tam == 1)
      cout << a << endl;
    else if(tam == 0)
      cout << 0 << endl;
    else{
      for(int i=0;i<v.size()-1;i++){
	diff = v[i+1].ff-v[i].ss-1;
	if(diff*b<a){
	  res += diff*b;
	  tam--;
	}
      }
      cout << res + tam*a << endl;
    }
    T--;
  }	
  return 0;
}

