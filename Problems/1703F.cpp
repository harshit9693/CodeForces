#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll find(ll num, vector<pair<ll,ll>>&vec){
  ll n  = vec.size();
  ll low = 0, high = n-1;
  ll ans = n;
  while(low<=high){
    ll mid = (low+high)/2;

    if(vec[mid].first>num){
      ans = mid;
      high = mid-1;
    }
    else{
      low = mid+1;
    }
  }
  return n-ans;
}

void solve(){

  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }

  vector<pair<ll,ll>>vec;
  for(ll i=0;i<n;i++){
    if(arr[i]<i+1){
      vec.push_back({arr[i],i+1});
    }
  }


  //now we have to count all the pairs such that arr[i]<i<arr[j]<j
  sort(vec.begin(),vec.end());

  ll totalCount = 0;

  for(ll i=0;i<vec.size();i++){
    ll sec = vec[i].second;
    totalCount+=find(sec,vec);
  }
  cout<<totalCount<<endl;

}


int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
  }
}