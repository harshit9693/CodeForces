#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

  ll n,k;
  cin>>n>>k;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }

  ll isSorted = true;
  for(ll i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
      isSorted = false;
    }
  }
  if(isSorted){
    cout<<"YES"<<endl;
  }
  else if(!isSorted && k>1) {
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