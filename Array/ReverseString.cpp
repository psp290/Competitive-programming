#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//Write code here
cout<<"Enter the string : ";
string a;

cin>>a;
int j = a.length()-1;
int i=0;
while(i<j)
{
    char temp = a[i];
    a[i]=a[j];
    a[j]=temp;

    i++;
    j--;
}

cout<<"After reverse string will be : "<<a<<endl;
return 0;
}