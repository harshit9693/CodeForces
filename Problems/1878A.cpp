#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    for(int i=0;i<n;i++){
      int cnt = 0;
      for(int j=i;j<n;j++){
        if(arr[j] == k){
          cnt++;
          if(cnt>=j-i+1){
            cout<<"YES"<<endl;
            return;
          }
        }
      }
    }
    cout<<"NO"<<endl;
    
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
