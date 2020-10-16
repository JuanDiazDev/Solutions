#include <bits/stdc++.h> 
using namespace std;

int search(int arr[], int e, int N){
	int l = 0;
	int r = N-1;
	while(l<=r){
		int mid = l +(r-l)/2;
		if(arr[mid]==e)
			return mid;
		if(arr[mid]>e)
			r=mid-1;
		else
			l=mid+1;
	}
	return -1;
}


void canicas(int N, int Q, int c){
	int arr[N];
	int input;
	for(int i=0;i<N;i++){
		cin >> input;
		arr[i]=input;
	}
	sort(arr, arr+N);
	string res = "CASE# " + to_string(c) + ":\n";
	cout << res;
	while(Q>0){
		cin >> input;
		int p = search(arr, input, N);
		if(p>=0){
			res =to_string(input)+" found at "+to_string(p+1);
		}
		else
			res =to_string(input)+" not found";
		cout << res << endl;
		Q--;
	} 

}

int main(){
    int N, Q;
    int c = 1;
    while(cin>>N>>Q){
        if(N==0 && Q==0)
        	break;
        canicas(N,Q,c);
        c++;
    }
    return 0;
}