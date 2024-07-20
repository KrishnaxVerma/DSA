//First negative integer in every window of size k
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
//TC SC O(n)
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                   
                   
    deque<long long> d;
    vector<long long> ans;
    
    //process first window of k size
    for(int i=0;i<K;i++){
        if(A[i]<0){
            d.push_back(i);
        }
    } 

    //store answer of first k sized window
    if(d.size()>0){
        ans.push_back(A[d.front()]);
    } 
    else{
        ans.push_back(0);
    }  

    //process for remaining windows
    for(int i=K;i<N;i++){

        if(!d.empty() && i-d.front()>=K){
            d.pop_front();
        }

        //addition
        if(A[i]<0){
            d.push_back(i);
        }

        //ans store
        if(d.size()>0){
        ans.push_back(A[d.front()]);
        
        } 
        else{
            ans.push_back(0);
        } 
    }

    return ans;                              
 }

//optimised solution TC O(n) SC O(1)
vector<int> firstNegativeInWindow(const vector<int>& A, int N, int K) {
    vector<int> result;
    int left = 0; // Left pointer of the current window
    int right = 0; // Right pointer of the current window

    while (right < N) {
        // Move right pointer to the end of the current window
        while (right < N && right - left + 1 <= K) {
            if (A[right] < 0) {
                result.push_back(A[right]);
                break; // Found the first negative integer in the window
            }
            ++right;
        }

        // If no negative integer found in the current window
        if (right == N || right - left + 1 > K) {
            result.push_back(0);
        }

        // Move left pointer to slide the window
        if (A[left] < 0) {
            ++left;
        }

        ++right;
        ++left;
    }

    return result;
}

int main() {
    // Example usage
    vector<int> A = {12, -1, -7, 8, -15, 30, 16, 28};
    int N = A.size();
    int K = 3;

    vector<int> result = firstNegativeInWindow(A, N, K);

    cout << "First negative integers in each window of size " << K << ":\n";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}