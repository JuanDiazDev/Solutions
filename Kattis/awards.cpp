#include<bits/stdc++.h>
using namespace std;

int main(){
  int I;
  string s;
  string s1;
  cin >> I;
  unordered_map<string, string> m;
  int pos = 1;
  string arr[12];
  while(I>0){
    cin >> s;
    cin >> s1;
    if(m[s] != s){
      m[s] = s;
      arr[pos-1] = s+" "+s1;
      pos++;
    }
    if(pos > 12)
      break;
    I--;
  }
  for(string s:arr){
    cout << s << "\n";
  }
}
    
    
    
