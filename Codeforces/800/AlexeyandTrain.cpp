#include<bits/stdc++.h>
using namespace std; 

void solve(int pairs[][2], int time[], int n){
  int arr[n][2];
  for(int i = 0; i < n; i++){
    arr[i][0] = pairs[i][0];
    arr[i][1] = pairs[i][1];
  }
  for(int i = 0; i < n-1; i++){
    arr[i][0] += time[i];
    int diff = pairs[i][1] - pairs[i][0];
    diff = diff/2 + (diff % 2 != 0);
    int dep = max(pairs[i][1], arr[i][0] + diff);
    diff = pairs[i+1][0] - pairs[i][1];
    arr[i + 1][0] = dep + diff;
  }
  int answer = arr[n-1][0] + time[n - 1];
  cout << answer << "\n";
}

int main(){
  int T;
  cin >> T;
  while(T > 0){
    int n;
    cin >> n;
    int pairs[n][2];
    for(int i = 0; i < n; i++){
      cin >> pairs[i][0] >> pairs[i][1];
    }
    int time[n];
    for(int i = 0; i < n; i++){
      cin >> time[i];
    }
    solve(pairs, time, n);
    T--;
  }
}
