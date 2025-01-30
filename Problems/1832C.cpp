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

  //if the array is increasing or decreasing then the contrast will be same as the differnce of first and last number

  //So we need to find the total number of points where there is steep

  if(n == 1){
    cout<<1<<endl;
    return;
  }

  ll count = 0, state = 0;

  for(ll i=1;i<n;i++){
    if(arr[i-1]>arr[i] && state != 1){
      //decreasing
      count++;
      state = 1;
    }
    else if(arr[i-1]<arr[i] && state != -1){
      count++;
      state = -1;
    }
  }
  cout<<count+1<<endl;

}


int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
  }
}