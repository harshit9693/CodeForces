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

  for (ll i = 0; i < n - 1; i++)
  {
    ll first = arr[i];
    ll sec = arr[i + 1];

    arr[i] = arr[i] - min(first, sec);
    arr[i + 1] = arr[i + 1] - min(first, sec);

    if (arr[i] > arr[i + 1])
    {
      cout << "NO" << endl;
    }
  }
  cout << "YES" << endl;
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