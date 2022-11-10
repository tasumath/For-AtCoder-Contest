#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int gcd(int x,int y){

  if(x%y == 0) return y;
  int m = x % y;
  //cout<<m<<endl;
  return gcd(y,m);

}


int main(){
  int a,b;
  cin>>a;
  cin>>b;
  
  if(a<b) swap(a,b);
  //cout<<a<<b<<endl;
  int ans = gcd(a,b);

  cout<<ans<<endl;

}