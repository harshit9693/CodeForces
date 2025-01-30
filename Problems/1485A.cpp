#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    ll a, b;
    cin >> a >> b;

    ll res = 1 + a / b; // Maximum count possible

    // Loop through values of b from b to b + 100
    for (ll p = b; p <= b + 100; p++)
    {
      if (p == 1)
      {
        continue; // Skip if p equals 1
      }

      ll div = 0, cur = a;
      while (cur > 0)
      {
        cur /= p;
        div++;
      }

      ll cnt = (p - b) + div; // we are adding (p-b) since we have to increment 1 each time
      res = min(res, cnt);
    }

    cout << res << endl;
  }

  return 0;
}
