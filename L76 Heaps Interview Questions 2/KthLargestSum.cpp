#include <iostream>
using namespace std;

// TC O(n2) SC O(k)
#include<queue>

int getKthLargest(vector<int> &arr, int k)
{
	priority_queue<int, vector<int>, greater<int> > sums;
	int n= arr.size();
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			
			if(sums.size() < k){
				sums.push(sum);
			}
			else if(sums.top() < sum){
				sums.pop();
				sums.push(sum);
			}
		}
	}

	

	return sums.top();
}

// TC O(n2logn) SC O(n2)
#include<algorithm>

int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
	vector<int> sums;
	int n= arr.size();
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			sums.push_back(sum);
		}
	}

	sort(sums.begin(), sums.end());

	return sums[sums.size()-k];
}

int main(){
    
    return 0;
}