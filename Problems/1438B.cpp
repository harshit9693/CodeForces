#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

    //     // Set to store unique normalized maps
    //     set<map<ll, ll>> seen;

    //     for (int i = 0; i < n; i++) {
    //         map<ll, ll> freq; // Frequency map for the current subarray
    //         for (int j = i; j < n; j++) {
    //             freq[arr[j]]++; // Increment frequency for the current element

    //             // Normalize the frequency map in-place
    //             for (auto it = freq.begin(); it != freq.end(); ) {
    //                 if (it->second > 1) {
    //                     freq[it->first + 1] += it->second / 2; // Add carry to the next number
    //                     it->second %= 2; // Keep remainder
    //                 }

    //                 if (it->second == 0) {
    //                     it = freq.erase(it); // Erase if the count becomes zero
    //                 } else {
    //                     ++it;
    //                 }
    //             }

    //             // Check if the normalized frequency map already exists
    //             if (seen.find(freq) != seen.end()) {
    //                 cout << "YES" << endl;
    //                 goto next_case; // Exit the test case early
    //             }

    //             // Add the current normalized frequency map to the set
    //             seen.insert(freq);
    //         }
    //     }

    //     cout << "NO" << endl;
    // next_case:
    //     continue;

      set<ll>st;
      bool found = false;
      for(ll i=0;i<n;i++){
        if(st.count(arr[i])){
          found = true;
          break;
        }
        st.insert(arr[i]);
      }
      if(found)cout<<"YES"<<endl;
      else cout<<"No"<<endl;
    }

    return 0;
}
