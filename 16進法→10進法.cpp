#include<iostream>
using namespace std;

int main(){
int N; cin>>N;

int a=N/16;
int b=N%16;
if(a<=9) cout<<a;
else cout<<(char)('A'+(a-10));
if(b<=9) cout<<b;
else cout<<(char)('A'+(b-10));

}
