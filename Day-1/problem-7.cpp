#include<bits/stdc++.h>
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long diff= INT_MAX;
    sort(a.begin(),a.end());
    int start = 0;
    int end = 0+m-1;
    while(end<n){
        diff=min(diff,(a[end] - a[start]));
        start++;
        end++;
    }
    return diff;
    }   
};