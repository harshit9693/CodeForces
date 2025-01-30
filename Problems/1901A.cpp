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

  ll mini = 0;
  mini = max(mini,arr[0]);
  mini = max(mini,2*(k-arr[n-1]));
  for(int i=1;i<n;i++){
    mini = max(mini,arr[i]-arr[i-1]);
  }
  cout<<mini<<endl;
}

int main(){
  int t;
  cin>>t;

  while(t--){
    solve();
  }
}