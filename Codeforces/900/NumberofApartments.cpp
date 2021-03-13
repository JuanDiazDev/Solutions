#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  while(N>0){
    int w;
    cin >> w;
    int siete = w/7;
    int cinco = 0;
    int tres = 0;
    if(w % 7 == 1){
      if(w < 2)
	siete = -1;
      else{
      siete--;
      cinco++;
      tres++;
      }
    }else if(w % 7 == 2){
      if(w<3)
	siete = -1;
      else{
	siete--;
	tres+=3;
      }
    }else if(w % 7 == 3){
      tres++;
    }else if(w % 7 == 4){
      if(w<5)
	siete = -1;
      else{
      siete--;
      cinco++;
      tres += 2;
      }
    }else if(w % 7 == 5){
      cinco++;
    }else if(w % 7 == 6){
      if(w<7)
	tres = 2;
      else{
	siete--;
	cinco+=2;
	tres++;
      }
    }
    if(siete == -1)
      cout << "-1" << "\n";
    else
      cout << to_string(tres)+" "+to_string(cinco)+" "+to_string(siete) << "\n";
    N--;
  }
  return 0;
}
      
