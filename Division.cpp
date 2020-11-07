#include<bits/stdc++.h>
using namespace std; 

#define endl "\n"

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  int T;
  cin >> T;
  while(T>0){
    int p, q;
    cin >> p >> q;
    int x = 1;
    for(int i=1;i<=(p/2)+1;i++){
      if(p % i == 0 && p/i % q != 0){
	x = p/i;
	break;
      }
    }
    cout << x << endl;
    T--;
  }
  return 0;
}
