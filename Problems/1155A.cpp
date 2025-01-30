#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{

  ll n;
  cin >> n;

  string s;
  cin >> s;
  bool found = false;
  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] > s[i + 1])
    {
      cout<<"YES"<<endl;
      cout << i+1 << " " << i + 2 << endl;
      found = true;
      break;
    }
  }
  if (!found)
  {
    cout << "NO" << endl;
  }
}