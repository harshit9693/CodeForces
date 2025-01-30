#include<bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){

  ll n;
  cin>>n;
  vector<ll>arr(n);

  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }

  //1 can not be the answer since it must have remainder 0 for all the case
  ll res = 2;   //possible remainder will be 1 and 0
  // if the array contains even and odd then it will have res 2
  //if it contains all odd or all evens

  while(true){
    set<ll>remainders;
    for(auto it:arr){
      remainders.insert(it%res);
    }
    if(remainders.size() == 2){
      break;
    }
    res*=2;
  }
  cout<<res<<endl;
}

int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
  }
}