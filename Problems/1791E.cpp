#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n;
  cin>>n;
  
  ll mini = INT_MAX, countNeg = 0,sum = 0;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x<0){
      countNeg++;
    }
    sum += abs(x);
    mini = min(mini,abs(x));
  }

  if(countNeg%2 == 0){
    cout<<sum<<endl;
    return;
  }
  else{
    cout<<sum-2*mini<<endl;
    return;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
