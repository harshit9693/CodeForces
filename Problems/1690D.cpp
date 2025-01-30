#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n >> k;

    string color;
    cin >> color;

    vector<ll> cntB(n, 0);
    cntB[0] = color[0] == 'B' ? 1 : 0;
    for (ll i = 1; i < n; i++)
    {
      if (color[i] == 'B')
      {
        cntB[i] = cntB[i - 1] + 1;
      }
      else
      {
        cntB[i] = cntB[i - 1];
      }
    }

    ll mini = INT_MAX;
    mini = min(mini,k-cntB[k-1]);
    for(ll i=k;i<n;i++){
      mini = min(mini,k-(cntB[i]-cntB[i-k]));
    }
    cout<<mini<<endl;
  }
}