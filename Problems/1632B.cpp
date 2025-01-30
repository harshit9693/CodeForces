#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;

    // first print the most significant bit having 0 and then print the 0 and then print the most significant bit as 1

    ll maxNum = n - 1;

    ll num = 1;

    while (maxNum > 0)
    {
      maxNum /= 2;
      num *= 2;
    }

    num /= 2;

    // printing all the numbers which has most significant bit as 0
    for (ll i = 1; i <= num - 1; i++)
    {
      cout << i << " ";
    }
    // printing 0
    cout << 0 << " ";

    // to have the minimum difference we will continue with the power of 2
    // printing all the numbers which has most significant bit as 1
    for (ll i = num; i < n; i++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}