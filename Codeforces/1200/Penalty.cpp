    #include <bits/stdc++.h>
     
    using namespace std;
     
    string s;
    int ans = 10;
     
    void solve(int k, int l, int v){
      if(l+(5-ceil((double)k / 2.0)) < v ||
         v+(5-(k/2)) < l || k == 10){
        ans = min(ans, k);
        return;
      }
      if(k % 2 == 0){
        if(s[k] == '1'){
          solve(k+1, l+1, v);
        }else if(s[k] == '0'){
          solve(k+1, l, v);
        }else{
          solve(k+1, l+1, v);
          solve(k+1, l, v);
        }
      }else{
        if(s[k] == '1'){
          solve(k+1, l, v+1);
        }else if(s[k] == '0'){
          solve(k+1, l, v);
        }else{
          solve(k+1, l, v+1);
          solve(k+1, l, v);
        }
      }
    }
     
     
    int main(){
      int T;
      cin >> T;
      cin.ignore();
      while(T--){
        getline(cin, s);
        ans = 10;
        solve(0, 0 ,0);
        cout << ans << endl;
      }
    }
