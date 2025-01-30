#include <bits/stdc++.h>
using namespace std;

const int MAX = 2005;
int rows, cols, result[MAX], nextRow[MAX];
set<int> matrix[MAX];
bool used[MAX];

void solve()
{
  cin >> rows >> cols;

  for (int i = 0; i < rows; i++)
    matrix[i].clear();
  memset(nextRow, -1, sizeof nextRow);
  memset(used, 0, sizeof used);

  for (int i = 0; i < rows; i++)
  {
    int value;
    for (int j = 0; j < cols; j++)
    {
      cin >> value;
      matrix[i].insert(value);
    }
    nextRow[*matrix[i].begin()] = i;
  }

  int totalElements = rows * cols;
  bool isValid = true;

  for (int i = 0; i < totalElements; i++)
  {
    if (i < rows)
    {
      if (nextRow[i] == -1)
      {
        isValid = false;
        break;
      }
      result[i] = nextRow[i];
      matrix[nextRow[i]].erase(matrix[nextRow[i]].begin());
      if (!matrix[nextRow[i]].empty())
      {
        nextRow[*matrix[nextRow[i]].begin()] = nextRow[i];
      }
      if (used[nextRow[i]])
      {
        isValid = false;
      }
      used[nextRow[i]] = true;
    }
    else
    {
      if (nextRow[i] == -1 || result[i % rows] != nextRow[i])
      {
        isValid = false;
        break;
      }
      matrix[nextRow[i]].erase(matrix[nextRow[i]].begin());
      if (!matrix[nextRow[i]].empty())
      {
        nextRow[*matrix[nextRow[i]].begin()] = nextRow[i];
      }
    }
  }

  if (isValid)
  {
    for (int i = 0; i < rows; i++)
    {
      cout << result[i] + 1 << " ";
    }
    cout << "\n";
  }
  else
  {
    cout << -1 << "\n";
  }
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
