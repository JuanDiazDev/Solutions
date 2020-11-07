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
  while(T > 0){
    cin.ignore(256,'\n');
    bool yes;
    int n, x;
    cin >> n >> x;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    for(int i=0;i<n;i++){
      cin >> brr[i];
    }
    for(int i=n-1;i>-1;i--){
      yes = false;
      for(int j=n-1;j>-1;j--){
	if(brr[j] == -1)
	  continue;
	if(arr[i]+brr[j] <= x){
	  brr[j] = -1;
	  yes = true;
	  break;
	}
      }
      if(!yes)
	break;
    }
    if(yes)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
    T--;
  }	  	  
  return 0;
}
