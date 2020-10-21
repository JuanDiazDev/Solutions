#include<iostream>
using namespace std;

void flip(){
	int flips;
	string s;
	cin >> flips >> s;
	int len = s.length();
	int izq = 0;
	bool izm = true;
	while(flips > 0){
		if(len < 4)
			break;
		if(izm){
			izq+=len/4;
			izm = false;
		}
		else
			izm = true;
		flips--;
		len-=(len/4);
		}
		s = s.substr(izq, len);
		cout << s << "\n";
	}

int main(){
	int N;
	cin >> N;
	while(N > 0){
		flip();
		N--;
	}
}