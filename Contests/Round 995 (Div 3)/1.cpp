#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),brr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        
        int totalSum = arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]>brr[i+1]){
                totalSum+=arr[i]-brr[i+1];
            }
        }
        cout<<totalSum<<endl;
    }
    return 0;
}
