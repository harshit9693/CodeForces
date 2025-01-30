#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(ll node, vector<bool> &vis, vector<vector<ll>> &g, vector<ll> &col, ll &cmp)
{
  vis[node] = true;
  col[node] = cmp;
  for (auto it : g[node])
  {
    if (!vis[it])
    {
      dfs(it, vis, g, col, cmp);
    }
  }
}

void dfsF(ll node, vector<bool> &vis, vector<vector<ll>> &f, map<pair<ll, ll>, ll> &mp)
{
  vis[node] = true;
  for (auto it : f[node])
  {
    if (!vis[it] && mp[{node, it}] != 1 && mp[{it, node}] != 1)
    {
      dfsF(it, vis, f, mp);
    }
  }
}

void solve()
{
  ll n, m1, m2;
  cin >> n >> m1 >> m2;

  vector<vector<ll>> f(n), g(n);
  for (ll i = 0; i < m1; i++)
  {
    ll x, y;
    cin >> x >> y;
    f[x - 1].push_back(y - 1);
    f[y - 1].push_back(x - 1);
  }
  for (ll i = 0; i < m2; i++)
  {
    ll x, y;
    cin >> x >> y;
    g[x - 1].push_back(y - 1);
    g[y - 1].push_back(x - 1);
  }

  vector<bool> visG(n, false);
  vector<ll> col(n, -1);
  ll countG = 0;
  for (ll i = 0; i < n; i++)
  {
    if (!visG[i])
    {
      dfs(i, visG, g, col, countG);
      countG++;
    }
  }

  map<pair<ll, ll>, ll> mp;
  ll bridges = 0;
  for (ll i = 0; i < n; i++)
  {
    for (auto it : f[i])
    {
      if (col[i] != col[it])
      {
        bridges++;
        mp[{i, it}] = 1;
        mp[{it, i}] = 1;
      }
    }
  }

  vector<bool> visF(n, false);
  ll countF = 0;
  for (ll i = 0; i < n; i++)
  {
    if (!visF[i])
    {
      dfsF(i, visF, f, mp);
      countF++;
    }
  }

  ll total = (countF - countG) + bridges / 2;
  cout << total << endl;
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
