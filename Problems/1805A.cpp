#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  ll xr = 0;
  for (auto it : arr)
  {
    xr ^= it;
  }

  if (xr == 0)
    cout << 0 << endl;
  else if (n & 1)
    cout << xr << endl;
  else
    cout << -1 << endl;
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