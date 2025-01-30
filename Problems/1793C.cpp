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

  //solve it using two pointer
  ll low = 1, high = n;
  ll i=0,j=n-1;

  while(i<j){
    if(arr[i] == low){
      i++,low++;
    }
    else if(arr[i] == high){
      i++,high--;
    }

    if(arr[j] == low){
      j--,low++;
    }
    else if(arr[j] == high){
      j--,high--;
    }

    if(arr[i] != low && arr[i] != high && arr[j]!= low && arr[j] != high){
      cout<<i+1<<" "<<j+1<<endl;
      return;
    }
  }
  cout<<-1<<endl;
}

int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
  }
}