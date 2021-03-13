#include<bits/stdc++.h>
using namespace std; 

vector<int> v;

void solve(int arr[], int start, int end, int depth){
  if(start >= end)
    return;
  int index = start;
  for(int i = start + 1; i < end; i++){
    if(arr[i] > arr[index])
      index = i;
  }
  v[index] = depth;
  solve(arr, start, index, depth+1);
  solve(arr, index+1, end, depth+1);
}

int main(){
  int T;
  cin >> T;
  while(T > 0){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
      v.push_back(0);
    }
    solve(arr, 0, n, 0);
    for(int i = 0; i < n; i++){
      if(i == n - 1)
	cout << v[i] << "\n";
      else
	cout << to_string(v[i]) + " ";
    }
    T--;
  }
}
