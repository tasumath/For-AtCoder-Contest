#include <bits/stdc++.h>
using namespace std;

bool prime_hantei(int p){
  for(int i=2;i*i<=p;i++){
    if(p%i == 0){
      return false;
    }
  }
  return true;
}


int main(){
  int n; cin>>n;

  for(int i=0;i<n;i++){
    int x; cin>>x;
    bool hantei = prime_hantei(x);
    if(hantei) cout<< "Yes"<<endl;
    else cout<<"No"<<endl;
  }
}
