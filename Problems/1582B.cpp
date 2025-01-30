#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n;
  cin >> n;
  ll cnt0 = 0, cnt1 = 0, sum = 0;

  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    sum += x;
    if (x == 0)
      cnt0++;
    if (x == 1)
      cnt1++;
  }

  // Number of nearly full subsequences
  cout << (1LL << cnt0) * cnt1 << endl; // Equivalent to pow(2, cnt0)
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
