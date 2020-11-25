#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//Write code here
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
int lo=0,hi=n-1;

while (lo<=hi)
{
    if(a[lo]>0 && a[hi]<=0)
    {
        swap(a[lo++],a[hi--]);
    }
    else
    {
        lo++;
    }
    
}
for (int i = 0; i < n; i++)
{
    cout<<a[i]<<" ";
}




return 0;
}