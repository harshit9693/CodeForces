#include<bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
    ll w,h;
    cin>>w>>h;

    ll kx0,kxh;
    cin>>kx0;
    vector<ll>x0(kx0);
    for(ll i=0;i<kx0;i++){
      cin>>x0[i];
    }
    cin>>kxh;
    vector<ll>xh(kxh);
    for(ll i=0;i<kxh;i++){
      cin>>xh[i];
    }

    //for y coordinate
    ll ky0,kyw;
    cin>>ky0;
    vector<ll>y0(ky0);
    for(ll i=0;i<ky0;i++){
      cin>>y0[i];
    }
    cin>>kyw;
    vector<ll>yw(kyw);
    for(ll i=0;i<kyw;i++){
      cin>>yw[i];
    }

    //we have four possibilites
    ll maxArea = 0;
    //find for x - axis
    ll area1 = (x0[kx0-1]-x0[0])*h;
    ll area2 = (xh[kxh-1]-xh[0])*h;

    //find from y axis
    ll area3 = (y0[ky0-1]-y0[0])*w;
    ll area4 = (yw[kyw-1]-yw[0])*w;

    cout<<max({area1,area2,area3,area4})<<endl;
  }
}