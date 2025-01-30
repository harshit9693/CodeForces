#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
  int t;
  cin>>t;

  while(t--){
    ll a,b,c;
    cin>>a>>b>>c;

    puts((a + (c % 2) > b) ? "First" : "Second");

  }
}