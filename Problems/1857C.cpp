#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

  ll n;
  cin>>n;
  vector<ll>brr(n*(n-1)/2);
  for(ll i=0;i<brr.size();i++){
    cin>>brr[i];
  }

  map<ll,ll>mp;
  for(auto it:brr){
    mp[it]++;
  }
  vector<pair<ll,ll>>vec;
  for(auto it:mp){
    vec.push_back({it.first,it.second});
  }
  sort(vec.begin(),vec.end());

  vector<ll>ans(n);

  ll i=0,j=0;
  while(j<n && i<vec.size()){
    ll freq = vec[i].second;
    ll num = vec[i].first;
    while(freq>0){
      ans[j] = num;
      freq-=n-j-1;
      j++;
    }
    i++;
  }
  while(j<n){
    ans[j] = vec.back().first;
    j++;
  }

  for(auto it:ans){
    cout<<it<<" ";
  }
  cout<<endl;
}


int main(){

  int t;
  cin>>t;
  while(t--){
    solve();
  }
}