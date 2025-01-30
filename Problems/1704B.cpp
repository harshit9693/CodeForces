#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    ll totalChanges = 0;
    ll mini = arr[0] - x;
    ll maxi = arr[0] + x;

    for (ll i = 1; i < n; i++)
    {
      ll low = arr[i] - x;
      ll high = arr[i] + x;

      if (low > maxi || high < mini)
      {
        mini = low;
        maxi = high;
        totalChanges++;
      }
      else
      {
        mini = max(mini, low);
        maxi = min(maxi, high);
      }
    }
    cout << totalChanges << endl;
  }
  return 0;
}