/*
Inversion Count for an array indicates – how far (or close) the array is from being sorted.
If the array is already sorted, then the inversion count is 0, but if the array is sorted
in reverse order, the inversion count is the maximum.


*/
#include <iostream>
#include<vector>
using namespace std;

/*
SIMPLE APPROACH
Traverse through the array, and for every index, find the number of smaller elements
 on its right side of the array. This can be done using a nested loop. Sum up the
  counts for all indices in the array and print the sum.
*/

int getInvCount(int *arr, int n)
{ // Time complexity is O(n^2)

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

// USING MERGE SORT APPROACH
int merge_and_count(vector<int>& arr, vector<int>& temp_arr, int left, int mid, int right) {
    int i = left;    // Starting index for left subarray
    int j = mid + 1; // Starting index for right subarray
    int k = left;    // Starting index to be sorted
    int inv_count = 0;

    // Conditions are checked to ensure that i doesn't exceed mid and j doesn't exceed right
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp_arr[k++] = arr[i++];
        } else {
            // There are mid - i inversions because all the remaining elements in the
            // left subarray (arr[i], arr[i+1], ..., arr[mid]) are greater than arr[j]
            temp_arr[k++] = arr[j++];
            inv_count += (mid - i + 1);
        }
    }

    // Copy the remaining elements of left subarray, if any
    while (i <= mid)
        temp_arr[k++] = arr[i++];

    // Copy the remaining elements of right subarray, if any
    while (j <= right)
        temp_arr[k++] = arr[j++];

    // Copy the sorted subarray into Original array
    for (int i = left; i <= right; i++)
        arr[i] = temp_arr[i];

    return inv_count;
}

int merge_sort_and_count(vector<int>& arr, vector<int>& temp_arr, int left, int right) {
    int mid, inv_count = 0;
    if (left < right) {
        mid = (left + right) / 2;

        inv_count += merge_sort_and_count(arr, temp_arr, left, mid);
        inv_count += merge_sort_and_count(arr, temp_arr, mid + 1, right);
        inv_count += merge_and_count(arr, temp_arr, left, mid, right);
    }
    return inv_count;
}

int count_inversions(vector<int>& arr) {
    vector<int> temp_arr(arr.size());
    return merge_sort_and_count(arr, temp_arr, 0, arr.size() - 1);
}

int main()
{
    int arr[] = {8, 4, 2, 1};
    vector<int> arr1= {8,4,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " Number of inversions are " << getInvCount(arr, n)<<endl;;
    cout << " Number of inversions are " << count_inversions(arr1);
    return 0;
}