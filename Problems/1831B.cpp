#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
        map<long long,long long>mp;
        long long maxi = 0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            mp[x]++;
            maxi = max(maxi,mp[x]);
        }
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            mp[x]++;
            maxi = max(maxi,mp[x]);
        }
        cout<<maxi<<endl;
    }
    return 0;
}
