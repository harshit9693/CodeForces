#include <bits/stdc++.h>
using ll = long long;
using namespace std;

// function to calculate xor upto n from 0

ll computeXOR(ll n)
{

  if (n % 4 == 0)
  {
    return n;
  }
  else if (n % 4 == 1)
  {
    return 1;
  }
  else if (n % 4 == 2)
  {
    return n + 1;
  }
  return 0;
}

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    ll mx, xr;
    cin >> mx >> xr;

    // xor upto mx-1
    ll x = computeXOR(mx - 1);

    ll res = mx + 2;
    if (x == xr)
    {
      res = mx;
    }
    else if ((x ^ xr) != mx)
    {
      res = mx + 1;
    }
    cout << res << endl;
  }
}