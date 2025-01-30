#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
  ll n;
  cin>>n;
  vector<ll>arr(n,0);

  arr[0] = 1;
  arr[2] = 1;
  arr[n-1] = 1;
  ll curr = 2;

  for(int i=0;i<n;i++){
    if(arr[i] == 0){
      arr[i]=curr;
      curr++;
    }
  }

  for(auto it:arr){
    cout<<it<<" ";
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