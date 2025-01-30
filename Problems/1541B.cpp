#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n;
  cin >> n;
  vector<ll> index(2 * n + 1, -1);
  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    index[x] = i + 1;
  }

  ll ans = 0;
  // minimum sum exists will be 3 and maximum sum exist will 2*n-1
  for (ll sum = 3; sum < 2 * n; sum++)
  {
    for (ll i = 1; i * i <= sum; i++)
    {
      if (sum % i == 0 && i * i != sum && index[i] != -1 && index[sum / i] != -1 && index[i] + index[sum / i] == sum)
      {
        ans++;
      }
    }
  }

  cout << ans << endl;
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