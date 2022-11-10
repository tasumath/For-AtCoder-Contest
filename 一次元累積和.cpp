#include <bits/stdc++.h>
using namespace std;

int a[110000];
//累積和b
int b[110000];

int main(){
  int N,q; cin>>N>>q;
  for(int i=0;i<=N;i++){
    if(i==0){
      b[i]=0;
      continue;
    }
    cin>>a[i];
    b[i]=a[i]+b[i-1];
  }

  for(int i=0;i<q;i++){
    int l; cin>>l;
    int r; cin>>r;
    int Ans=b[r]-b[l-1];
    cout<<Ans<<endl;
  }
  return 0;

}

//14min
//b[l-1]で手こずった。
//b[l]とすると、l=2,r=3のときに二日目の来場者をカウント出来ない