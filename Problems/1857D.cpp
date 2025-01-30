#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

  ll n;
  cin>>n;
  vector<ll>arr(n),brr(n);

  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  for(ll i=0;i<n;i++){
    cin>>brr[i];
  }

  vector<ll>diff(n);
  ll maxi = INT_MIN;
  for(ll i=0;i<n;i++){
    diff[i]=arr[i]-brr[i];
    maxi = max(maxi,diff[i]);
  }

  vector<ll>ind;
  for(ll i=0;i<n;i++){
    if(diff[i] == maxi){
      ind.push_back(i+1);
    }
  }
  cout<<ind.size()<<endl;
  for(ll i=0;i<ind.size();i++){
    cout<<ind[i]<<" ";
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