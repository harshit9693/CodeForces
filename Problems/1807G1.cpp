#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    if(arr[0] != 1){
      cout<<"NO"<<endl;
      return;
    }
    ll sum = 1;
    for(int i=1;i<n;i++){
      if(sum<arr[i]){
        cout<<"NO"<<endl;
        return;
      }
      sum+=arr[i];
    }
    cout<<"YES"<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
