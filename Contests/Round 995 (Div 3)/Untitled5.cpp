#include<bits/stdc++.h>
#define long long ll
using namespace std;


int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n,k;
		cin>>n>>k;
		
		vector<long long>pr(n),nr(n);
		
		for(int i=0;i<n;i++){
			cin>>pr[i];
		}
		
		for(int i=0;i<n;i++){
			cin>>nr[i];
		}
		
		ll max_profit = 0;
		ll no_buys = n, neg_rating = 0 ;
		
		map<int,int>diff_neg_rating;
		map<int,int>diff_no_buys;
		
		for(int i=0;i<n;i++){
			diff_neg_rating[pr[i]]++;
		}
		
		for(int i=0;i<n;i++){
			diff_no_buys[nr[i]]--;
			diff_neg_rating[nr[i]]--;
		}
		
		for(auto [price , rating] : diff_neg_rating){
			if(neg_rating <= k){
				max_profit = max(max_profit,price*no_buys);
			}
			neg_rating += diff_neg_rating[price];
			no_buys += diff_no_buys[price];
		}
		cout<<max_profit<<endl;
		
	}
	return 0;
}
