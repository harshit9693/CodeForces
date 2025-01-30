#include<bits/stdc++.h>
using ll = long long;
using namespace std;


int main(){

  int t;
  cin>>t;
  while(t--){
    ll m,n;
    cin>>m>>n;

    ll countNeg = 0 , mini = INT_MAX;
    ll sum = 0;
    for(ll i=0;i<m;i++){
      for(ll j=0;j<n;j++){
        ll x;
        cin>>x;
        if(x<0){
          countNeg++;
        }
        sum+=abs(x);
        mini = min(mini,abs(x));
      }
    }
    if(countNeg%2 == 0){
      cout<<sum<<endl;
      continue;
    }
    else{
      sum-=2*mini;
      cout<<sum<<endl;
      continue;
    }
  }
}