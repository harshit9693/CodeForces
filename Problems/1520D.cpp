#include<bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){

  ll n;
  cin>>n;
  // vector<ll>arr(n);
  map<ll,ll>mp;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    mp[x-i]++;
  }

  ll count = 0;
  for(auto it:mp){
    ll freq = it.second;
    count += ((freq-1)*freq)/2;
  }
  cout<<count<<endl;
}


int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
  }
}