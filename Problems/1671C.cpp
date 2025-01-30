#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll find(ll day, vector<ll> &pre, ll x)
{

  // we have to find the total number of possible sugars items
  ll ans = -1;
  ll low = 0, high = pre.size() - 1;
  if (pre[0] + day > x)
  {
    return -1;
  }
  while (low <= high)
  {
    ll mid = (low + high) / 2;

    if (pre[mid] + day * (1 + mid) <= x)
    {
      ans = mid;
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return 1 + ans;
}

void solve()
{

  ll n, x;
  cin >> n >> x;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());
  vector<ll> pre(n);
  pre[0] = arr[0];
  for (ll i = 1; i < n; i++)
  {
    pre[i] = arr[i] + pre[i - 1];
  }

  ll totalCount = 0;
  ll day = 0;
  while (true)
  {
    ll items = find(day, pre, x);
    if (items == -1)
    {
      break;
    }
    day++;
    totalCount += items;
  }
  cout << totalCount << endl;
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