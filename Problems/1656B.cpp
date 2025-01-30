#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

  ll n,k;
  cin>>n>>k;

  vector<ll>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  //kisi bhi do element ka diff agar k aayega to woh yes hoga
  bool found = false;
  map<int,bool>mp;
  for(int i=0;i<n;i++){
    if(mp.find(arr[i]+k) != mp.end() || mp.find(arr[i]-k)!=mp.end()){
      found = true;
      break;
    }
    mp[arr[i]]=true;
  }
  if(found){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}

int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
  }
}