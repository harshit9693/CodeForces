#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void findFactors(ll x, map<ll, ll> &factorsCount)
{

  ll i = 2;
  while (i * i <= x)
  {
    while (x % i == 0)
    {
      factorsCount[i]++;
      x /= i;
    }
    i++;
  }
  if (x > 1)
  {
    factorsCount[x]++;
  }
}

void solve()
{

  ll n;
  cin >> n;
  vector<ll> arr(n);
  map<ll, ll> factorsCount;
  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    arr[i] = x;
    findFactors(x, factorsCount);
  }

  // we are calculating using factors because the product of inital array and final array should be same and to make the array all elements equal product must have the factors divisible by n

  for (auto it : factorsCount)
  {
    if (it.second % n != 0)
    {
      cout << "NO" << endl;
      return;
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