#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n, m;
  cin >> n >> m;

  vector<ll> arr(n), cst(m);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (ll i = 0; i < m; i++)
  {
    cin >> cst[i];
  }

  sort(arr.rbegin(), arr.rend());
  ll totalCost = 0;
  ll j = 0;
  for (ll i = 0; i < n; i++)
  {
    if (j < m && cst[j] <= cst[arr[i] - 1])
    {
      totalCost += cst[j];
      j++;
    }
    else
    {
      totalCost += cst[arr[i] - 1];
    }
  }
  cout << totalCost << endl;
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
