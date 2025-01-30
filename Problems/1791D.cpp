#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		
		vector<int>pre(n,0),suf(n,0);
		map<char,int>mp1,mp2;
		
		for(int i=0;i<n;i++){
			mp1[s[i]]++;
			pre[i]=mp1.size();
		}
		
		for(int i=n-1;i>=0;i--){
			mp2[s[i]]++;
			suf[i]=mp2.size();
		}
		
		long long count = 0;
		for(int i=0;i<n-1;i++){
			long long temp = pre[i]+suf[i+1];
			count = max(count,temp);
		}
		
		cout<<count<<endl;
	}
}
