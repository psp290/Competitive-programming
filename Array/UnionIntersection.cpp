/*
It is sample program to find union as well as intersection of two sorted array.




#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Union(int a[],int b[],int n,int m);
void Intersection(int a[],int b[],int n,int m);


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//Write code here

cout<<"Enter the test cases"<<endl;
int t;
cin>>t;
while (t--)
{
    cout<<"Enter the array length n and m :"<<endl;
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    cout<<"Enter the array a :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the array b :"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    
    cout<<"Union of two sorted arrays : ";
    Union(a,b,n,m);
    cout<<endl;
    cout<<"Intersection of two sorted arrays : ";
    Intersection(a,b,n,m);
    cout<<endl;

}



return 0;
}

void Union(int a[],int b[],int n,int m)
{
    int i=0,j=0;
    while (i<n && j<m)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else
        {
            cout<<b[j]<<" ";
            j++;
        }
        
    }
    while (i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while (j<m)
    {
        cout<<b[j]<<" ";
        j++;
    }
    
    
    

}

void Intersection(int a[],int b[],int n,int m)
{
    int i=0,j=0;
    while (i<n && j<m)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]<b[j])
        {
            
            i++;
        }
        else
        {
            
            j++;
        }
        
    }

}

*/





//Program as per question
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int Union(int a[],int b[],int n,int m);
//void Intersection(int a[],int b[],int n,int m);

int Reduce(int a[],int n)
{
    int b[n];
    int k=1;
    b[0]=a[0];
    for(int i=0;i<n-1;i++)
    {
        
        if(a[i]!=a[i+1])
        {
            b[k++]=a[i+1];
        }
    }
    for(int i=0;i<k;i++)
    {
        a[i]=b[i];
    }
    return k;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//Write code here

//cout<<"Enter the test cases"<<endl;
int t;
cin>>t;
while (t--)
{
    //cout<<"Enter the array length n and m :"<<endl;
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    //cout<<"Enter the array a :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    //cout<<"Enter the array b :"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
     n = Reduce(a,n);
     m = Reduce(b,m);
    //cout<<"Union of two sorted arrays : ";
    int z = Union(a,b,n,m);
    //cout<<endl;
    //cout<<"Intersection of two sorted arrays : ";
    //Intersection(a,b,n,m);
    cout<<z<<endl;

}



return 0;
}

int Union(int a[],int b[],int n,int m)
{
    int i=0,j=0,count=0;
    while (i<n && j<m)
    {
        if(a[i]==b[j])
        {
            //cout<<a[i]<<" ";
            i++;
            j++;
            count++;
        }
        else if(a[i]<b[j])
        {
            //cout<<a[i]<<" ";
            i++;
            count++;
        }
        else
        {
            //cout<<b[j]<<" ";
            j++;
            count++;
        }
        
    }
    while (i<n)
    {
        //cout<<a[i]<<" ";
        i++;
        count++;
    }
    while (j<m)
    {
        //cout<<b[j]<<" ";
        j++;
        count++;
    }
    
    return count;
    

}

