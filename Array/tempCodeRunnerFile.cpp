#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
        int revpoint=n-1;
        int j=n-2;

        while(revpoint>0 && a[j]>a[j+1])
        {
            revpoint--;
            j--;
        }
        
        if(revpoint==n-1)
        {
            swap(a[revpoint],a[revpoint-1]);
        }
        else if(revpoint==0)
        {
            reverse(a,a+n);
        }
        else
        {
            swap(a[revpoint-1],a[revpoint]);
            reverse(a+revpoint+1,a+n);
        }
        

        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
	    
        
	}
	return 0;
}