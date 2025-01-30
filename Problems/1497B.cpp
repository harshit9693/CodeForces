#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> arr(n);

  // Read input and calculate remainders
  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    arr[i] = x % k;
  }

  // Count occurrences of each remainder
  vector<ll> mp(k);
  for (auto rem : arr)
  {
    mp[rem]++;
  }
  ll count = 0;
  if (mp[0] > 0)
  {
    count++;
  }

  for (ll i = 1; i < k; i++)
  {
    if (mp[i])
    {
      if (abs(mp[i] - mp[k - i]) <= 1)
      {
        count++;
      }
      else
      {
        count += abs(mp[i] - mp[k - i]);
      }
      mp[k - i] = 0;
    }
  }

  cout << count << endl;
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
