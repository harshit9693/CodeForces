#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    ll n;
    cin >> n;

    string s;
    cin >> s;

    set<char> st;
    ll count = 0;

    for(ll i = 0;i<n;i++){
        st.insert(s[i]);
        count+=st.size();
    }
    cout<<count<<endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
