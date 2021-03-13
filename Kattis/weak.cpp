#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void weak(int n){
  if(n==-1)
    return;
  int arr[n][n];
  int array[n];
  int input;
  for(int i=0;i<n;i++){
    array[i]=0;
    for(int j=0;j<n;j++){
      cin >> input;
      arr[i][j] = input;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j)
	continue;
      if(arr[i][j] == 1){
	for(int k=0;k<n;k++){
	  if(arr[i][k] == 1 && arr[j][k] == 1){
	    array[i] = 1;
	    array[j] = 1;
	  }
	}
      }
    }
  }
  string res = "";
  int j = 1;
  for(int i=0;i<n;i++){
    if(array[i] == 0){
      res+=to_string(i);
      break;
    }
    j++;
  }
  for(int i=j;i<n;i++){
    if(array[i] == 0)
      res+=" " + to_string(i);
  }
  cout << res << "\n";
}

int main(){
  int N;
  while(cin >> N)
    weak(N);
  return 0;
}
