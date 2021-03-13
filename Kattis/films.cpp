#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int p, int r, int num) {
   if (p <= r) {
      int mid = p+(r-p)/2;
      if (arr[mid] == num)
      return mid ;
      if (arr[mid] > num)
      return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
      return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}

int main(){
  int s, z;
  int input;
  cin >> s;
  int arr[s];
  bool b = false;
  bool b1 = false;
  for(int i=0;i<s;i++){
    cin >> input;
    arr[i] = input;
  }
  cin >> z;
  int array[z];
  for(int i=0;i<z;i++){
    cin >> input;
    array[i] = input;
  }
  sort(arr, arr+s);
  sort(array, array+z);
  int fn[s+z];
  for(int i=0;i<s;i++){
      fn[i]=arr[i];
  }
  int index = 0;
  for(int i=s;i<s+z;i++){
  	fn[i]=array[index];
  	index++;
  }
  int pos;
  int pos1;
  sort(fn, fn+(s+z));
  int res = 0;
  for(int i=0;i<s+z;i++){
  	if(i>0 && fn[i] == fn[i-1]){
  		continue;
  	}
  	pos = binarySearch(arr, 0, s-1, fn[i]);
  	pos1 = binarySearch(array, 0, z-1, fn[i]);
  	if(pos > -1 && pos1 > -1){
  		b = false;
  		b1 = false;
  		res++;
  	}else if(pos>-1 && pos1 == -1){
  		if(b)
  			continue;
  		b = true;
  		b1 = false;
  		res++;
  	}else{
  		if(b1)
  			continue;
  		b = false;
  		b1 = true;
  		res++;
  	}
  }
  cout << res << "\n";
    
  return 0;
}
  

 
