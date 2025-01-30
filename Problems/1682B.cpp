#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  ll ans = 0;
  bool start = false;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == i)
    {
      continue;
    }
    else
    {
      if (!start)
      { // first number
        ans = arr[i];
        start = true;
      }
      else
      {
        ans &= arr[i];
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
  return 0;
}
