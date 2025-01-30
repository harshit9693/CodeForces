#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string>vec;
bool static cmp(int a, int b) {
    if(a<b){
      return vec[a][b] == '1';
    }
    return vec[a][b] == '0';
}

void solve() {
    ll n;
    cin >> n;
    vec.resize(n);
    for(ll i=0;i<n;i++){
      cin>>vec[i];
    }

    vector<ll>ind(n);
    for(ll i=0;i<n;i++){
      ind[i]=i;
    }

    sort(ind.begin(),ind.end(),cmp);

    for(ll i=0;i<n;i++){
      cout<<ind[i]+1<<" ";
    }
    cout<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        solve();
    }

    return 0;
}
