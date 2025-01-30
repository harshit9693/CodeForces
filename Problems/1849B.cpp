#include<bits/stdc++.h>
using namespace std;

// Custom comparator for sorting
bool comparePairs(pair<long, long> a, pair<long, long> b) {
    if (a.first == b.first) {
        return a.second < b.second; // Break ties by index (ascending order)
    }
    return a.first > b.first; // Higher remainder first
}


int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		long long n,k;
		cin>>n>>k;
		vector<long long>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
//		// Custom comparator for the priority queue
//	    auto comparator = [](pair<long long, long long>& a, pair<long long, long long>& b) {
//	        if (a.first == b.first) {
//	            return a.second > b.second; // Second element in ascending order
//	        }
//	        return a.first < b.first; // First element in descending order
//	    };
////		// Priority queue with the custom comparator
//    	priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, decltype(comparator)> pq(comparator);
//    	
//    	for(long long i=0;i<n;i++){
//    		pq.push({arr[i],i});
//		}
//		
//		vector<long long>ans;
//		while(!pq.empty()){
//			long long num = pq.top().first;
//			long long ind = pq.top().second;
//			pq.pop();
//			
//			if(num-k<=0){
//				ans.push_back(ind);
//			}
//			else{
//				pq.push({num-k,ind});
//			}
//		}
//		
//		for(auto it:ans){
//			cout<<it+1<<" ";
//		}
//		cout<<endl;

		//key observation
		//1: Health <= k to kill the monster
		//2: Health Deduction should be in the K order
		//3: Alll monster will alive until atleast one of them having health >= k
		
		vector<pair<long long , long long>>vec;
		for(long long i=0;i<n;i++){
			if(arr[i]%k == 0){
				vec.push_back({k,i});
			}
			else{
				vec.push_back({arr[i]%k,i});
			}
		}
		
		sort(vec.begin(),vec.end(),comparePairs);
		
		for(auto it:vec){
			cout<<it.second+1<<" ";
		}
		cout<<endl;
	}
}
