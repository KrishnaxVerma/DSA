#include<map>

int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    map<int, int> m;
    int maxfreq=-1;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
        maxfreq= max(maxfreq, m[arr[i]]);
    }

    int ans=-1;
    for(int i=0;i<n;i++){
        if(maxfreq== m[arr[i]]){
            ans=arr[i];
            break;
        }
    }

    return ans;
}