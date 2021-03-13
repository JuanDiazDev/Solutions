#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
  int N;
  int t;
  cin >> N;
  int arr[N];
  for(int i=0; i<N; i++){
    cin >> t;
    arr[i] = t;
  }
  int s = 1;
  qsort(arr, N, sizeof(int), compare);
  for(int i=N-1; i>-1; i--){
    arr[i]+=s;
    s++;
  }
  t=0;
  for(int i:arr){
    if(i>t)
      t=i;
  }
  cout << t+1 << "\n";
  return 0;
}
