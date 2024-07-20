/*
https://www.naukri.com/code360/problems/rearrange-string_982765?leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h> 
string reArrangeString(string &s)
{
	// Write your code here.
	string ans="";
	unordered_map<char, int> m;
	for(int i=0;i<s.length();i++){
		m[s[i]]++;
	}

	priority_queue<pair<int, char>> pq;
	for(auto i:m){
		pq.push({i.second, i.first});
	}

	while(pq.size()>1){
		auto top1= pq.top();
		pq.pop();
		
		auto top2= pq.top();
		pq.pop();

		ans.push_back(top1.second);
		top1.first--;

		ans.push_back(top2.second);
		top2.first--;

		if(top1.first>0){
			pq.push(top1);
		}

		if(top2.first>0){
			pq.push(top2);
		}
	}

	if(!pq.empty()){
		if(pq.top().first > 1){
			ans="not possible";
		}
		else{
			ans.push_back(pq.top().second);
		}
	}

	return ans;
	
	return ans;
}
