#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }

  for(ll i=0;i<n;i++){
    if(arr[i] == 1)arr[i]+=1;
  }

  for(ll i=1;i<n;i++){
    if(arr[i]%arr[i-1]==0){
      arr[i] += 1;
    }
  }
  for(auto it:arr){
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