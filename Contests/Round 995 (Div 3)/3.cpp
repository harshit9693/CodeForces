#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		
		vector<int>mi(m),ki(k);
		
		for(int i=0;i<m;i++){
			cin>>mi[i];
		}
		for(int i=0;i<k;i++){
			cin>>ki[i];
		}
		
		map<int,bool>mp;
		
		for(int i=0;i<k;i++){
			mp[ki[i]]=true;
		}
		
		string ans = "";
		for(int i=0;i<m;i++){
			if(mp.find(mi[i]) != mp.end()){
				if(k-1 == n-1){
					ans.push_back('1');
				}
				else{
					ans.push_back('0');
				}
			}
			else{
				if(k == n-1){
					ans.push_back('1');
				}
				else{
					ans.push_back('0');
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
