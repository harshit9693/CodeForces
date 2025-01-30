#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, q;
        cin >> n >> k >> q;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long count = 0, result = 0;
        
        for(long long i=0;i<n;i++){
        	if(arr[i]<=q){
        		++count;
			}
			else{
				count=0;
			}
			if(count>=k){
				result+=(count-k+1);
			}
		}
        
        cout << result << endl;
    }

    return 0;
}

