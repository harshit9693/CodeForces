#include<bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){

  ll n,x;
  cin>>n>>x;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }

  //we will find the length of the longest subarray having sum x

  //using 2 pointer approach
  ll i=0,j=0,ans = -1;
  ll sum = 0;

  while(j<n){
    while(i<j && sum>x){
      sum-=arr[i];
      i++;
    }
    sum+=arr[j];
    if(sum == x){
      ans = max(ans,j-i+1);
    }
    j++;
  }
  if(sum == x){
    ans = max(ans,n-i);
  }
  if(ans == -1){
    cout<<-1<<endl;
    return ;
  }
  cout<<n-ans<<endl;
}


int main(){
  int t;
  cin>>t;

  while(t--){
    solve();
  }
}