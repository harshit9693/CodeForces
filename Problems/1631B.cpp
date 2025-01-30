#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  reverse(arr.begin(),arr.end());

  //we have to convert all the element present at index 0
  ll ind = 1, ele = arr[0];
  ll cnt = 0;

  while(ind<n){
    if(arr[ind] == ele){
      ind++;
    }
    else{
      cnt++;
      ind*=2;
    }
  }
  cout<<cnt<<endl;
}

int main(){
  int t;
  cin>>t;

  while(t--){
    solve();
  }
}