#include<bits/stdc++.h>
using namespace std;

int main(){
  unordered_map<string, int> um;
  string s;
  string problem, result;
  int time, right=0, res=0;
  for(auto x:um){
    x.second = 0;
  }
  while(getline(cin, s)){
    stringstream line(s);
    line >> time;
    if(time == -1)
      break;
    line >> problem;
    line >> result;
    um[problem] += result == "right" ? (time):20;
    if(result == "right"){
      right++;
      um[problem] *= -1;
    }
  }
  for(auto x: um){
    if(x.second < 0)
      res -= x.second;
  }
  cout << to_string(right) + " " + to_string(res) << "\n";
  return 0;
}
    
