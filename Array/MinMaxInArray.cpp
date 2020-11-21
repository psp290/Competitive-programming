#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//Write code here

int n;
cout<<"Enter number of elements "<<endl;
cin>>n;
int arr[n];
cout<<"Enter elements "<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int mini,maxi;
 mini=maxi=arr[0];
for (int i = 1; i < n; i++)
{
    if(mini>arr[i])
    {
        mini=arr[i];
    }
    if(maxi<arr[i])
    {
        maxi=arr[i];
    }
}

cout<<"Maximum element is "<<maxi<<" and Minimum element is "<<mini<<endl;



return 0;
}