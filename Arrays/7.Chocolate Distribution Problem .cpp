
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        long long res=INT_MAX;
        sort(a.begin(),a.end());
        for(long long i=0;i<n-m+1;i++)
        {
            res=min(res,a[i+m-1]-a[i]);
        }
        return res;
    }   
};