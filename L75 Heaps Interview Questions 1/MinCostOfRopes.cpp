/*There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths.
The task is to connect the ropes with minimum cost. Given N size array arr[] contains the lengths of the ropes*/

#include <iostream>
using namespace std;

// TC O(nlogn) SC O(n)
long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(long long int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        
        long long cost=0;
        
        while(pq.size()>1){
            long long a= pq.top();
            pq.pop();
            long long b= pq.top();
            pq.pop();
            long long sum= a+b;
            cost+=sum;
            pq.push(sum);
        }
        
        return cost;
        
    }

int main(){
    
    return 0;
}