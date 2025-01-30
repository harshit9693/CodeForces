#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

  ll n;
  cin >> n;

  vector<int> a(n), b(n), res(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  // now find the number of elements greater the elements in the b
  int i = 0, j = 0;

  while (j < n)
  {
    while (i < n && b[j] >= a[i])
    {
      i++;
    }
    if (i != n)
    {
      res[j] = n - i;
    }
    j++;
  }
  // for (auto it : res)
  // {
  //   cout << it << " ";
  // }

  sort(res.begin(), res.end());
  ll ans = 1;
  int mod = 1e9 + 7;
  for (ll i = 0; i < n; i++)
  {
    ans = ((ans % mod) * (res[i] - i) % mod) % mod;
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

  return 0;
}
