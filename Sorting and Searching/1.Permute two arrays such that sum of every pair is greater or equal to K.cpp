#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    int flag=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    cin>>k;
    sort(a,a+n);
    sort(b,b+n);
    reverse(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]+b[i]<k)
         {
             flag=1;
         }
    }
    if(flag)
        cout<<"No";
    else
        cout<<"Yes";
	return 0;
}