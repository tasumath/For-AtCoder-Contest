#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

long long a[110000];
int n,k;

bool copy_cal(long long m){
  long long s=0;
  for(int i=1;i<=n;i++){
    s = s + m / a[i];
  }
  if(k<=s) return true;//s>kでは上手くいかない。
  else return false;
}


int main(){
  cin>>n>>k;
  for(int i=1;i<=n;i++) cin>>a[i];

  long long left=0;
  long long right=1000000001;
  while(right-left>1){
    long long mid=(right+left)/2;
    if(copy_cal(mid)) right=mid;
    else left=mid;
    //cout<<"mid"<<mid<<endl;
  }
  cout<<right;//判定の際に、k<=sと絞ることで解答がrightになる。
  //rightはk枚目まで印刷を終えるという条件を満たす最小の秒数となっている。
}