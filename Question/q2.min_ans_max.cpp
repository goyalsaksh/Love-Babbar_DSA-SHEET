// Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

 

// Example 1:

// Input:
// N = 6
// A[] = {3, 2, 1, 56, 10000, 167}
// Output:
// min = 1, max =  10000


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long,long long>p;
    long long mini=INT_MAX;
    long long maxi=INT_MIN;
    for(int i=0;i<n;i++){
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    p.first=mini;
    p.second=maxi;
    return p;
    // TC=O(N)  SC=O(1)
