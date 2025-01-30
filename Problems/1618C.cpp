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

  if (n == 1)
  {
    // For single element, any d = arr[0] works since there's no adjacency.
    cout << arr[0] << endl;
    return;
  }

  ll gcd1 = 0, gcd2 = 0;

  // Calculate gcd1 for even indices (0-based).
  for (ll i = 0; i < n; i += 2)
  {
    gcd1 = __gcd(gcd1, arr[i]);
  }

  // Calculate gcd2 for odd indices (0-based).
  for (ll i = 1; i < n; i += 2)
  {
    gcd2 = __gcd(gcd2, arr[i]);
  }

  // Check if gcd1 can be a valid `d`.
  bool validGcd1 = true;
  for (ll i = 1; i < n; i += 2)
  {
    if (arr[i] % gcd1 == 0)
    {
      validGcd1 = false;
      break;
    }
  }

  if (validGcd1)
  {
    cout << gcd1 << endl;
    return;
  }

  // Check if gcd2 can be a valid `d`.
  bool validGcd2 = true;
  for (ll i = 0; i < n; i += 2)
  {
    if (arr[i] % gcd2 == 0)
    {
      validGcd2 = false;
      break;
    }
  }

  if (validGcd2)
  {
    cout << gcd2 << endl;
    return;
  }

  // If neither gcd1 nor gcd2 works, it's impossible.
  cout << 0 << endl;
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
