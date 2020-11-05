#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  int N;
  cin >> N;
  int arr[N];
  for(int i=0;i<N;i++){
    cin >> arr[i];
  }
  sort(arr, arr + (sizeof(arr)/sizeof(arr[0])));
  int res = 0;
  for(int i=N-1;i>-1;i--){
    if(arr[i] >= (N-i)){
      res++;
    }else
      break;
  }
  cout << res << "\n";
  return 0;
}
