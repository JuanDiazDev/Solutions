#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n, t;
	cin >> m >> n >> t;
	bool ac = true;
	if(t==1){
		int res = 1;
		if(n > 12)
			ac = false;
		else{
      for (int i = 2; i <= n; ++i){
         res*=i;
      }
      if(res>m || res < 1)
      	ac = false;
  }
	}else if(t==2){
		if(pow(2,n)>m)
			ac = false;
	}else if(t==3){
		if(pow(n,4)>m)
			ac = false;
	}else if(t==4){
		if(pow(n,3)>m)
			ac = false;
	}else if(t==5){
		if(pow(n,2)>m)
			ac = false;
	}else if(t==6){
		if((n*log2(n))>m)
			ac = false;
	}else{
		if(n>m)
			ac = false;
	}
	if(ac)
		cout << "AC" << "\n";
	else
		cout << "TLE" << "\n";
	return 0;
}
