#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll mid, vector<pair<ll, ll>> &minPowers)
{
  if (minPowers[0].first > mid)
  {
    return false;
  }
  ll totalPowers = mid;
  for (ll i = 0; i < minPowers.size(); i++)
  {
    if (totalPowers < minPowers[i].first)
    {
      return false;
    }
    totalPowers += minPowers[i].second;
  }
  return true;
}

void solve()
{
  ll n;
  cin >> n;

  vector<vector<ll>> arr(n);
  vector<pair<ll, ll>> minPowers(n);

  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    vector<ll> temp(x);
    ll miniP = 0;

    for (ll j = 0; j < x; j++)
    {
      cin >> temp[j];
      miniP = max(miniP, temp[j] - j);
    }

    arr[i] = temp;
    minPowers[i] = {miniP, x};
  }

  // Sort based on the minimum power required to enter
  sort(minPowers.begin(), minPowers.end());

  // Apply binary search to find the minimum initial power
  ll low = 0, high = 1e9, ans = 1e9;

  while (low <= high)
  {
    ll mid = low + (high - low) / 2;
    if (check(mid, minPowers))
    {
      ans = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }

  cout << ans + 1 << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }
}
