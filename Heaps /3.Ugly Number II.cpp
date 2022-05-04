class Solution {
//Solved using DP
public:
    int nthUglyNumber(int n) {
        int m=0,f=0,q=0;
        vector<int> v(n);
        v[0]=1;
        for(int i=1;i<n;i++)
        {
            v[i]=min(v[m]*2,min(v[f]*3,v[q]*5));
            if(v[i]==v[m]*2) m++;
            if(v[i]==v[f]*3) f++;
            if(v[i]==v[q]*5) q++;
        }
        return v[n-1];
    }
};