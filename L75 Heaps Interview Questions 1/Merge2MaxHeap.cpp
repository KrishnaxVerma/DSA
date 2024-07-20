#include <iostream>
using namespace std;

// TC O(n) SC O(m+n)
class Solution{
    public:
    // 0 based indexing
    void heapify(vector<int> &arr, int n, int i){

        int largest= i;
        int left= 2*i+1;
        int right= 2*i+2;
    
        if(left < n && arr[largest] < arr[left]){
            largest= left;
        }
        if(right < n && arr[largest] < arr[right]){
            largest= right;
        }
    
        if(largest!=i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // merge two vectors
        vector<int> ans;
        for(auto i:a){
            ans.push_back(i);
        }
        for(auto i:b){
            ans.push_back(i);
        }
        
        //heapify
        for(int i=(n+m)/2-1; i>=0; i--){
            heapify(ans, n+m, i);
        }
        
        return ans;
    }
};

//TC O(nlogn) SC O(m+n)
vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        vector<int> ans;
        int i=a.size()-1,j=b.size()-1;
        while(i>=0 && j>=0){
            if(a[i] > b[j]){
                ans.push_back(a[i]);
                i--;
            }
            else{
                ans.push_back(b[j]);
                j--;
            }
        }
        
        while(i>=0){
            ans.push_back(a[i]);
            i--;
        }
        
        while(j>=0){
            ans.push_back(b[j]);
            j--;
        }
        
        return ans;
    }

int main(){
    
    return 0;
}