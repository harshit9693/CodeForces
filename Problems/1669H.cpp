#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

  ll n, k;
  cin >> n >> k;

  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<ll> bitCount(32);
  for (ll num : arr)
  {
    for (ll i = 0; i < 32; i++)
    {
      if (num & (1 << i))
      { // Check if the i-th bit is set
        bitCount[i]++;
      }
    }
  }

  // for(auto it:bitCount){
  //   cout<<it<<" ";
  // }
  // cout<<endl;
  
  ll ans = 0;
  for(ll i=30;i>=0;i--){
    if(bitCount[i]+k>=n){
      ans += pow(2,i);
      k-=n-bitCount[i];
    }
  }
  
  cout<<ans<<endl;
}

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }
}