#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n, x;
  cin >> n >> x;

  ll xr = 0;

  for (int i = 0; i < 3; i++)
  {
    bool found = true;
    for (int j = 0; j < n; j++)
    {
      int ele;
      cin >> ele;
      if ((x | ele) != x)
      {
        found = false;
      }
      if (found)
      {
        xr |= ele;
      }
    }
  }

  if (xr == x)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
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
