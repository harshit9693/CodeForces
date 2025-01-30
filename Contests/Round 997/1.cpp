#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;

  while(t--){

    int n,m;
    cin>>n>>m;

    vector<pair<int,int>>vec(n);

    for(int i=0;i<n;i++){
      cin>>vec[i].first>>vec[i].second;
    }

    int ans= 4*m*n;

    for(int i=1;i<n;i++){
      ans -= 2*(m-vec[i].first+m-vec[i].second);
    }
    cout<<ans<<endl;

  }
}