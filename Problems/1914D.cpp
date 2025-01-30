#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Memoization table
vector<vector<vector<ll>>> dp;

ll find(ll row, ll col1, ll col2, vector<vector<ll>> &arr)
{
  ll n = arr[0].size();

  // Base case: if we have processed all rows
  if (row == 3)
  {
    return 0;
  }

  // Check if the result is already computed
  if (dp[row][col1][col2 + 1] != -1)
  { // col2 + 1 to handle -1 case
    return dp[row][col1][col2 + 1];
  }

  ll score = 0;
  for (ll i = 0; i < n; i++)
  {
    // Ensure that no column is repeated in the selection
    if (i != col1 && i != col2)
    {
      score = max(score, arr[row][i] + find(row + 1, col1, i, arr));
    }
  }

  // Store the result in the memoization table
  return dp[row][col1][col2 + 1] = score;
}

void solve()
{
  ll n;
  cin >> n;

  // // vector<vector<ll>> arr(3, vector<ll>(n));
  // for (int i = 0; i < 3; i++)
  // {
  //   for (ll j = 0; j < n; j++)
  //   {
  //     cin >> arr[i][j];
  //   }
  // }

  // // Initialize the memoization table with -1
  // dp = vector<vector<vector<ll>>>(3, vector<vector<ll>>(n, vector<ll>(n + 1, -1)));

  // ll maxi = 0;
  // for (ll i = 0; i < n; i++)
  // {
  //   ll score = arr[0][i] + find(1, i, -1, arr);
  //   maxi = max(maxi, score);
  // }
  // cout << maxi << endl;

  vector<pair<ll,ll>>va(n),vb(n),vc(n);

  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    va[i] = {x,i};
  }
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    vb[i] = {x,i};
  }
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    vc[i] = {x,i};
  }

  sort(va.rbegin(),va.rend());
  sort(vb.rbegin(),vb.rend());
  sort(vc.rbegin(),vc.rend());

  // we have to check all the possibility for 3X3 matrix
  ll maxScore = 0;
  for(int i=0;i<3;i++){
    //take first 
    for(int j=0;j<3;j++){
      for(int k=0;k<3;k++){
        if(va[i].second!=vb[j].second && va[i].second!=vc[k].second && vb[j].second!=vc[k].second){
          ll score = va[i].first+vb[j].first+vc[k].first;
          maxScore = max(maxScore,score);
        }
      }
    }
  }
  cout<<maxScore<<endl;
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
