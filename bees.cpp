#include<iostream>
#include<cmath>
using namespace std;

void bees(float d, int s){
  if(d == 0 && s == 0)
    return;
  float arr[s][2];
  short int array[s];
  float input;
  for(int i=0;i<s;i++)
    array[i] = 0;
  for(int i=0;i<s;i++){
    for(int j=0;j<2;j++){
      cin >> input;
      arr[i][j] = input;
    }
  }
  for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
      if((sqrt(pow(arr[i][0]-arr[j][0], 2)+pow(arr[i][1]-arr[j][1], 2))) <= d){
	array[i]=1;
	array[j]=1;
      }
    }
  }
  int sweet = 0;
  int sour = 0;
  for(short int i: array){
    if(i == 1){
      sour++;
    }else
      sweet++;
  }
  string a = to_string(sweet);
  string b = to_string(sour);
  cout << b + " sour, " + a + " sweet" << "\n";
}
int main(){
  float d;
  int s;
  while(cin >> d >> s){
    bees(d, s);
  }
  return 0;
}

