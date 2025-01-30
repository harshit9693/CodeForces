#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    if(i%2){
      arr[i]=x;
    }
    else{
      arr[i]=-1*x;
    }
  }
  //we just need to find if there exist a subarray with zero sum
  //since differnece of alternating element will give the sum 0
  map<ll,bool>mp;
  ll sum = 0;
  mp[0]=true;
  for(ll i=0;i<n;i++){
    sum+=arr[i];
    if(mp.find(sum)!=mp.end()){
      cout<<"YES"<<endl;
      return;
    }
    mp[sum]=true;
  }
  cout<<"NO"<<endl;
  return;
}


int main(){

  int t;
  cin>>t;
  while(t--){
    solve();
  }
}