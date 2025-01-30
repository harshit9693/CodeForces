#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {

    string a;
    cin >> a;
    string b;
    cin >> b;

    int m = a.length(), n = b.length();
    // generate all the substring of a
    map<string, bool> mp;
    for (int i = 0; i < m; i++)
    {
      for (int j = i; j < m; j++)
      {
        string temp = a.substr(i, j - i + 1);
        mp[temp] = true;
      }
    }

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = i; j < n; j++)
      {
        string temp = b.substr(i, j - i + 1);
        if (mp.find(temp) != mp.end())
        {
          int len = temp.length();
          maxi = max(maxi, len);
        }
      }
    }
    cout << m + n - 2 * maxi << endl;
  }
}