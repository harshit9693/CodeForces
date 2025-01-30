
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
  int a1, a2, a4, a5;
  cin >> a1 >> a2 >> a4 >> a5;

  int Fibonacciness = 0;

  // Try different values for a3 that might maximize Fibonacciness
  vector<int> candidates = {a1 + a2, a4 - a2, a5 - a4};
  for (int a3 : candidates)
  {
    int count = 0;
    if (a2 + a3 == a4)
      count++;
    if (a1 + a2 == a3)
      count++;
    if (a3 + a4 == a5)
      count++;
    Fibonacciness = max(Fibonacciness, count);
  }

  cout << Fibonacciness << endl;
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
