#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

  ll n,x,y;
  cin>>n>>x>>y;

  //we don't have to form the vectors
  //find the lcm of x and y so that which will add no value 
  ll prod = x*y;
  ll gcd = __gcd(x,y);
  ll lcm = prod/gcd;

  ll repeated = n/lcm;
  ll xfactors = n/x;
  ll yfactors = n/y;
  xfactors-=repeated;
  yfactors-=repeated;

  if(xfactors == 0){
    cout<<(yfactors*(yfactors+1)/2)*-1<<endl;
    return;
  }
  else if(yfactors == 0){
    cout<<n*(n+1)/2-(n-xfactors)*(n-xfactors+1)/2<<endl;
    return;
  }
  else{
    cout<<n*(n+1)/2-(n-xfactors)*(n-xfactors+1)/2-yfactors*(yfactors+1)/2<<endl;
    return;
  }
}

int main(){

  int t;
  cin>>t;
  while(t--){
    solve();
  }
}