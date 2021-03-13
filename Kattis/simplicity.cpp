#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
  string s;
  unordered_map<char,int> map;
  cin >> s;
  for(char const &c: s) {
    if(map.count(c) > 0)
      map[c] = map.at(c)+1;
    else
      map[c] = 1;
  }
  if(map.size() < 3)
    cout << 0 << endl;
  else{
    int arr[map.size()];
    int i = 0;
    for(pair<const char,int>& x: map){
      if(i == map.size())
	break;
      arr[i] = x.second;
      i++;
    }
    qsort(arr, map.size(), sizeof(int), compare);
    int res = 0;
    for(int i=0; i<(map.size()-2); i++){
      res += arr[i];
    }
    cout << res << endl;
  }
  return 0;
}
