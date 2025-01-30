#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
  int t;
  cin>>t;

  while(t--){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    ll diff = INT_MAX;
    bool sorted = true;
    for(ll i=1;i<n;i++){
      if(arr[i]<arr[i-1]){
        sorted = false;
        break;
      }
      diff = min(1+(arr[i]-arr[i-1])/2,diff);
    }
    if(!sorted){
      cout<<0<<endl;
      continue;
    }
    else{
      cout <<diff<<endl;
    }
  }
}