#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		long long n,p;
		cin>>n>>p;
		
		vector<pair<long long,long long>>vec(n);
		for(int i=0;i<n;i++){
			cin>>vec[i].second;
		}
		for(int i=0;i<n;i++){
			cin>>vec[i].first;
		}
		
		sort(vec.begin(),vec.end());
		
		long long totalCost = p;
		long long remPerson = n-1;
		
		for(int i=0;i<n;i++){
			if(vec[i].first>=p){
				break;
			}
			
			long long shares  = min(remPerson,vec[i].second);
			totalCost += shares*vec[i].first;
			remPerson -= shares;
		}
		totalCost += remPerson*p;	
	    cout<<totalCost<<endl;
		
	}
	
	
	return 0;
}
