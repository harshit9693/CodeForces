#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  ll n,x;
  cin>>n>>x;

  vector<ll>arr(n);
  ll mini = 0,maxi = 0;
  ll sum = 0;
  for(ll i=0;i<n;i++){
    ll num;
    cin>>num;
    maxi+=num%x == 0?num/x:num/x+1;
    sum += num;
  }
  mini = sum%x == 0?sum/x:sum/x+1;
  cout<<mini<<" "<<maxi<<endl;
}


int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
  }
}