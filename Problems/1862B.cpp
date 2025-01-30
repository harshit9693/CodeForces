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

  vector<ll>ans;
  ans.push_back(arr[0]);
  for(int i=1;i<n;i++){
    if(arr[i]<ans.back()){
      
      ans.push_back(arr[i]);
      ans.push_back(arr[i]);
    }
    else{
      ans.push_back(arr[i]);
    }
  }

  cout<<ans.size()<<endl;
  for(auto it:ans){
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